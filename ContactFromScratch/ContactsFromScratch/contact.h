#ifndef CONTACT_H
#define CONTACT_H

#include <QString>
#define CONTACT_SEPARATOR ';'


class Contact{
private:
    QString m_firstname;
    QString m_lastname;
    QString m_email;
public:

    Contact(QString firstname, QString lastname, QString email);
    Contact(QString infos);

    QString firstname() const;
    void setFirstname(const QString &firstname);
    QString lastname() const;
    void setLastname(const QString &lastname);
    QString email() const;
    void setEmail(const QString &email);

    QString getLine();
};

#endif // CONTACT_H
