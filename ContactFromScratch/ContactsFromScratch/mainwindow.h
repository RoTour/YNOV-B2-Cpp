#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "contact.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_listContacts_currentRowChanged(int currentRow);

    void on_submit_clicked();

    void on_saveContactsButton_clicked();

    void on_addContact_clicked();

    void on_loadFile_clicked();

    void on_saveInNewFileButton_clicked();

    void on_importButton_clicked();

    void on_search_button_clicked();

private:
    Ui::MainWindow *ui;
    QString m_contactsFileName;
    QList<Contact*> m_contacts;
    QList<Contact*> m_currentContactsDisplayed;
    Contact* m_currentContact;

    void populateForm();
    void loadContacts();
    void loadContacts(QString fileName);
    void saveContacts();
    void reduceContactList();
    void populateList();
    void populateList(QList<Contact*> list);
    QList<Contact *> filterList(QString filter);
};
#endif // MAINWINDOW_H
