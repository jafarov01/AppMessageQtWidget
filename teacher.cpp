#include "teacher.h"

Teacher::Teacher(QObject *parent)
    : User{parent}
{

}

Teacher::Teacher(const string &ID, const string &firstName,
                 const string &lastName, const Gender &gender,
                 const string &email, const string &photo) : User(ID, firstName, lastName, gender, email, photo)
{
    makeFullName();
}

string Teacher::getFullName() const
{
    return fullName;
}

string Teacher::makeFullName()
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

