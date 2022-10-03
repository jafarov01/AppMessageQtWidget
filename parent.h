#ifndef PARENT_H
#define PARENT_H

#include "user.h"

class Parent : public User
{
public:
    explicit Parent(QObject *parent = nullptr);

    Parent(const string& ID, const string& firstName, const string& lastName,
            const Gender& gender, const string& email, const string& photo);

    string getFullName() const override;
    string makeFullName() override;
};

#endif // PARENT_H
