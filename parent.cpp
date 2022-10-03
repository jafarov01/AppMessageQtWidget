#include "parent.h"

Parent::Parent(QObject *parent)
    : User{parent}
{
}

Parent::Parent(const string &ID, const string &firstName,
               const string &lastName, const Gender &gender,
               const string &email, const string &photo) : User(ID, firstName, lastName, gender, email, photo)
{
    makeFullName();
}

string Parent::getFullName() const
{
    return fullName;
}

string Parent::makeFullName()
{
    if (gender == Gender::Male)
    {
        fullName += "Mr. " + lastName + " " + firstName;
    }
    else
    {
        fullName += "Ms. "+ lastName + " " + firstName;
    }
    return fullName;
}

