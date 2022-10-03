#ifndef TEACHER_H
#define TEACHER_H

#include "user.h"

class Teacher : public User
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

    Teacher();
    Teacher(const string& ID, const string& firstName, const string& lastName,
            const Gender& gender, const string& email, const string& photo);
    virtual string getFullName() const override;
    string makeFullName() override;
};

#endif // TEACHER_H
