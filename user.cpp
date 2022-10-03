#include "user.h"

User::User(QObject *parent)
    : QObject{parent} , ID(""), firstName(""), lastName(""), gender(Gender::Male), email(""), photo("")
{
}

User::User(const string &ID, const string &firstName,
           const string &lastName, const Gender &gender,
           const string &email, const string &photo)
{
    this->ID = ID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->gender = gender;
    this->email = email;
    this->photo = photo;
}

string User::getFullName() const
{
    return fullName;
}

bool User::save() const
{
    if (email.find("@") == string::npos) return false;
    if (photo.find(".jpg") == string::npos) return false;
    return true;
}

string User::makeFullName()
{
    fullName = lastName + " " + firstName;
    return fullName;
}
