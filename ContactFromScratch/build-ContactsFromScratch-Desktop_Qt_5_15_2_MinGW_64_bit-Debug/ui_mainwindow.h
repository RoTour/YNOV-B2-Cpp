/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QFormLayout *searchLayout;
    QLabel *searchLabel;
    QLineEdit *search_textEdit;
    QPushButton *search_button;
    QListWidget *listContacts;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *saveContactsButton;
    QPushButton *saveInNewFileButton;
    QPushButton *loadFile;
    QVBoxLayout *verticalLayout_2;
    QLabel *editFile_label;
    QFormLayout *formLayout;
    QLabel *firstname_label;
    QLineEdit *firstname_textEdit;
    QLabel *lastname_label;
    QLineEdit *lastname_textEdit;
    QLabel *email_label;
    QLineEdit *email_textEdit;
    QLabel *phone_label;
    QLineEdit *phone_editText;
    QLabel *comments_label;
    QLineEdit *comments_editText;
    QPushButton *addContact;
    QPushButton *submit;
    QPushButton *importButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(656, 346);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchLayout = new QFormLayout();
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchLabel = new QLabel(centralwidget);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));

        searchLayout->setWidget(0, QFormLayout::LabelRole, searchLabel);

        search_textEdit = new QLineEdit(centralwidget);
        search_textEdit->setObjectName(QString::fromUtf8("search_textEdit"));

        searchLayout->setWidget(0, QFormLayout::FieldRole, search_textEdit);


        horizontalLayout->addLayout(searchLayout);

        search_button = new QPushButton(centralwidget);
        search_button->setObjectName(QString::fromUtf8("search_button"));

        horizontalLayout->addWidget(search_button);


        verticalLayout->addLayout(horizontalLayout);

        listContacts = new QListWidget(centralwidget);
        listContacts->setObjectName(QString::fromUtf8("listContacts"));
        listContacts->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(listContacts);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        saveContactsButton = new QPushButton(centralwidget);
        saveContactsButton->setObjectName(QString::fromUtf8("saveContactsButton"));
        saveContactsButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(saveContactsButton);

        saveInNewFileButton = new QPushButton(centralwidget);
        saveInNewFileButton->setObjectName(QString::fromUtf8("saveInNewFileButton"));

        horizontalLayout_2->addWidget(saveInNewFileButton);

        loadFile = new QPushButton(centralwidget);
        loadFile->setObjectName(QString::fromUtf8("loadFile"));

        horizontalLayout_2->addWidget(loadFile);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        editFile_label = new QLabel(centralwidget);
        editFile_label->setObjectName(QString::fromUtf8("editFile_label"));
        editFile_label->setScaledContents(false);

        verticalLayout_2->addWidget(editFile_label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        firstname_label = new QLabel(centralwidget);
        firstname_label->setObjectName(QString::fromUtf8("firstname_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, firstname_label);

        firstname_textEdit = new QLineEdit(centralwidget);
        firstname_textEdit->setObjectName(QString::fromUtf8("firstname_textEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, firstname_textEdit);

        lastname_label = new QLabel(centralwidget);
        lastname_label->setObjectName(QString::fromUtf8("lastname_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lastname_label);

        lastname_textEdit = new QLineEdit(centralwidget);
        lastname_textEdit->setObjectName(QString::fromUtf8("lastname_textEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lastname_textEdit);

        email_label = new QLabel(centralwidget);
        email_label->setObjectName(QString::fromUtf8("email_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, email_label);

        email_textEdit = new QLineEdit(centralwidget);
        email_textEdit->setObjectName(QString::fromUtf8("email_textEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, email_textEdit);

        phone_label = new QLabel(centralwidget);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, phone_label);

        phone_editText = new QLineEdit(centralwidget);
        phone_editText->setObjectName(QString::fromUtf8("phone_editText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, phone_editText);

        comments_label = new QLabel(centralwidget);
        comments_label->setObjectName(QString::fromUtf8("comments_label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, comments_label);

        comments_editText = new QLineEdit(centralwidget);
        comments_editText->setObjectName(QString::fromUtf8("comments_editText"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comments_editText);


        verticalLayout_2->addLayout(formLayout);

        addContact = new QPushButton(centralwidget);
        addContact->setObjectName(QString::fromUtf8("addContact"));

        verticalLayout_2->addWidget(addContact);

        submit = new QPushButton(centralwidget);
        submit->setObjectName(QString::fromUtf8("submit"));

        verticalLayout_2->addWidget(submit);

        importButton = new QPushButton(centralwidget);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        verticalLayout_2->addWidget(importButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 656, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Contacts", nullptr));
        searchLabel->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        search_button->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        saveContactsButton->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        saveInNewFileButton->setText(QCoreApplication::translate("MainWindow", "Save File as..", nullptr));
        loadFile->setText(QCoreApplication::translate("MainWindow", "Load File", nullptr));
        editFile_label->setText(QCoreApplication::translate("MainWindow", "No file selected", nullptr));
        firstname_label->setText(QCoreApplication::translate("MainWindow", "Firstname", nullptr));
        lastname_label->setText(QCoreApplication::translate("MainWindow", "Lastname", nullptr));
        email_label->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        phone_label->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        comments_label->setText(QCoreApplication::translate("MainWindow", "Comments", nullptr));
        addContact->setText(QCoreApplication::translate("MainWindow", "Create Contact", nullptr));
        submit->setText(QCoreApplication::translate("MainWindow", "Save Contact", nullptr));
        importButton->setText(QCoreApplication::translate("MainWindow", "Import from another file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
