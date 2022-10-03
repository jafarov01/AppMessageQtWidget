#include "student.h"

Student::Student(QObject *parent)
    : User{parent}
{

}

Student::Student(const string &ID, const string &firstName,
                 const string &lastName, const Gender &gender,
                 const string &email, const string &photo) : User(ID, firstName, lastName, gender, email, photo)
{
    makeFullName();
}
