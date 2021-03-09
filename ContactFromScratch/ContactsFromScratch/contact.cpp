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
    return QString(m_firstname + CONTACT_SEPARATOR + m_lastname + CONTACT_SEPARATOR + m_email + '\n');
}

Contact::Contact(QString firstname, QString lastname, QString email):
    m_firstname(firstname), m_lastname(lastname), m_email(email) {
    qDebug() << __PRETTY_FUNCTION__ << m_firstname << m_lastname << m_email;
}

Contact::Contact(QString infos)
{
    QStringList data = infos.split(CONTACT_SEPARATOR);
    m_firstname = data.at(0);
    m_lastname = data.at(1);
    m_email = data.at(2);

    qDebug() << __PRETTY_FUNCTION__ << m_firstname << m_lastname << m_email;
}















