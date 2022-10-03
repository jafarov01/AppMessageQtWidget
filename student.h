#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class Student : public User
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

    Student(const string& ID, const string& firstName, const string& lastName,
        const Gender& gender, const string& email, const string& photo);
};

#endif // STUDENT_H
