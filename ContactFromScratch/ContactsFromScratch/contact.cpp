#include <QDebug>
#include "contact.h"

QString Contact::firstname() const
{
    return m_firstname;
}

void Contact::setFirstname(const QString &firstname)
{
    m_firstname = firstname;
}

QString Contact::lastname() const
{
    return m_lastname;
}

void Contact::setLastname(const QString &lastname)
{
    m_lastname = lastname;
}

QString Contact::email() const
{
    return m_email;
}

void Contact::setEmail(const QString &email)
{
    m_email = email;
}

QString Contact::getLine()
{
    return QString(
        m_firstname +
        CONTACT_SEPARATOR +
        m_lastname +
        CONTACT_SEPARATOR +
        m_email +
        CONTACT_SEPARATOR +
        m_phoneNumber +
        CONTACT_SEPARATOR +
        m_comments +
        '\n'
    );
}

QString Contact::phoneNumber() const
{
    return m_phoneNumber;
}

void Contact::setPhoneNumber(const QString &phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

QString Contact::comments() const
{
    return m_comments;
}

void Contact::setComments(const QString &comments)
{
    m_comments = comments;
}

Contact::Contact(QString firstname, QString lastname, QString email, QString phoneNumber, QString comments):
    m_firstname(firstname), m_lastname(lastname), m_email(email), m_phoneNumber(phoneNumber), m_comments(comments) {
    qDebug() << __PRETTY_FUNCTION__ << m_firstname << m_lastname << m_email << m_phoneNumber << m_comments;
}

Contact::Contact(QString infos)
{
    QStringList data = infos.split(CONTACT_SEPARATOR);
    m_firstname = data.at(0);
    m_lastname = data.at(1);
    m_email = data.at(2);
    if (data.length() == 5) { // Compatibility purpose
        m_phoneNumber = data.at(3);
        m_comments = data.at(4);
    }

    qDebug() << __PRETTY_FUNCTION__ << m_firstname << m_lastname << m_email << m_phoneNumber << m_comments;
}















