#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QMap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->importButton->setEnabled(false);
    ui->addContact->setEnabled(false);
    ui->submit->setEnabled(false);
//    m_contactsFileName = "contacts.txt";
//    loadContacts();
}

MainWindow::~MainWindow() {
    for (auto contact: m_contacts){
        delete contact;
    }
    delete ui;
}

void MainWindow::populateList()
{
    ui->listContacts->clear();
    for(const auto &contact: qAsConst(m_contacts)) {
        qDebug() << contact->email();
        ui->listContacts->addItem(contact->email());
    }
}

void MainWindow::on_listContacts_currentRowChanged(int currentRow)
{
    qDebug() << __PRETTY_FUNCTION__ << currentRow;
    if (currentRow == -1) return;
    m_currentContact = m_contacts.at(currentRow);
    populateForm();
}

void MainWindow::populateForm()
{
    ui->firstname_textEdit->setText(m_currentContact->firstname());
    ui->lastname_textEdit->setText(m_currentContact->lastname());
    ui->email_textEdit->setText(m_currentContact->email());
    ui->phone_editText->setText(m_currentContact->phoneNumber());
    ui->comments_editText->setText(m_currentContact->comments());
}

void MainWindow::loadContacts()
{
    loadContacts(m_contactsFileName);
}

void MainWindow::loadContacts(QString fileName)
{
    QFile contactFile(fileName);
    if (contactFile.open(QIODevice::ReadWrite | QIODevice::Text)){
        QTextStream flux(&contactFile);
        QString all = flux.readAll();
        qDebug() << all;
        QStringList lines(all.split("\n"));
        for (const auto &line : qAsConst(lines)) {
            if(line.isEmpty()) {
                continue;
            }
            Contact* newContact = new Contact(line);
            m_contacts.append(newContact);
        }
        contactFile.close();
        populateList();
        ui->statusbar->showMessage(QString::number(m_contacts.length()) + " contacts chargés.");
    } else {
        QString error = "Impossible d'ouvrir le fichier " + m_contactsFileName;
        qCritical() << error;
        ui->statusbar->showMessage(error);
    }
}

void MainWindow::saveContacts()
{
    QFile contactFile(m_contactsFileName);
    if (contactFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream flux(&contactFile);
        for (auto contact : qAsConst(m_contacts)) {
            QString contactStr = contact->getLine();
            flux << contactStr;
        }
        contactFile.close();
        ui->statusbar->showMessage(QString::number(m_contacts.length()) + " contacts enregistrés.");
    } else {
        QString error = "Impossible de sauver le fichier " + m_contactsFileName;
        qCritical() << error;
        ui->statusbar->showMessage(error);
    }
}

void MainWindow::reduceContactList()
{
    QMap<QString, Contact*> filteredList = QMap<QString, Contact*>();
    for(auto contact: qAsConst(m_contacts)) {
        filteredList[contact->email()] = contact;
    }
    int initialSize = m_contacts.length();
    m_contacts.clear();
    m_contacts.append(filteredList.values());
    if (initialSize != m_contacts.length()) {
        ui->statusbar->showMessage("Removed " + QString(initialSize-m_contacts.length()) + "duplicated contact(s)");
    }
}

void MainWindow::on_submit_clicked()
{
    qDebug() << __PRETTY_FUNCTION__;
    m_currentContact->setFirstname(ui->firstname_textEdit->text());
    m_currentContact->setLastname(ui->lastname_textEdit->text());
    m_currentContact->setEmail(ui->email_textEdit->text());
    m_currentContact->setPhoneNumber(ui->phone_editText->text());
    m_currentContact->setComments(ui->comments_editText->text());
    populateList();
}

void MainWindow::on_saveContactsButton_clicked()
{
    saveContacts();
}

void MainWindow::on_addContact_clicked()
{
    m_contacts.append(new Contact("", "", "", "", ""));
    populateList();
    ui->listContacts->setCurrentRow(m_contacts.length()-1);
}

void MainWindow::on_loadFile_clicked()
{
    m_contactsFileName = QFileDialog::getOpenFileName(
        this,
        tr("Ouvrir un fichier contact"),
        "",
        tr("Fichier text (*.txt)")
    );
    m_contacts.clear();
    loadContacts();
    ui->listContacts->setCurrentRow(0);
    ui->editFile_label->setText(
        QString("Editing: " + m_contactsFileName.mid(m_contactsFileName.lastIndexOf("/")))
    );
    ui->importButton->setEnabled(true);
    ui->addContact->setEnabled(true);
    ui->submit->setEnabled(true);
}

void MainWindow::on_saveInNewFileButton_clicked()
{
    QString newFileName = QFileDialog::getSaveFileName(
        this,
        tr("Sauvegarder un fichier contact"),
        "",
        tr("Fichier text (*.txt)")
    );
    QFile newFile(newFileName);
    if(newFile.open(QIODevice::ReadWrite)) {
        newFile.close();
    } else {
        QString error = "Impossible de sauver le fichier " + newFileName;
        qCritical() << error;
        ui->statusbar->showMessage(error);
    }
    m_contactsFileName = newFileName;
    loadContacts();
    saveContacts();
    ui->editFile_label->setText(
        QString("Editing: " + m_contactsFileName.mid(m_contactsFileName.lastIndexOf("/")))
    );
    qDebug() << __PRETTY_FUNCTION__ << newFileName;
}

void MainWindow::on_importButton_clicked()
{
    QString importFilePath = QFileDialog::getOpenFileName(
        this,
        tr("Ouvrir un fichier contact"),
        "",
        tr("Fichier text (*.txt)")
    );
    loadContacts(importFilePath);
    reduceContactList();
    populateList();
}
