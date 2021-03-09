#ifndef CONTACT_H
#define CONTACT_H

#include <QString>
#define CONTACT_SEPARATOR ';'


class Contact{
private:
    QString m_firstname;
    QString m_lastname;
    QString m_email;
    QString m_phoneNumber;
    QString m_comments;
public:

    Contact(QString firstname, QString lastname, QString email, QString phoneNumber, QString comments);
    Contact(QString infos);
    Contact(Contact const &contact);

    QString firstname() const;
    void setFirstname(const QString &firstname);
    QString lastname() const;
    void setLastname(const QString &lastname);
    QString email() const;
    void setEmail(const QString &email);
    QString phoneNumber() const;
    void setPhoneNumber(const QString &phoneNumber);
    QString comments() const;
    void setComments(const QString &comments);

    QString getLine();
};

#endif // CONTACT_H
