#ifndef USER_H
#define USER_H

#include <QObject>
#include <string>
using namespace std;

enum Gender {
    Male, Female
};

class User : public QObject
{
    Q_OBJECT
public:
    explicit User(QObject *parent = nullptr);

protected:
    string ID;
    string firstName;
    string lastName;
    Gender gender;
    string email;
    string photo;
    string fullName;

public:
    User(const string& ID, const string& firstName, const string& lastName,
        const Gender& gender, const string& email, const string& photo);

    User* clone() {
      User* copy = new User;
      //copy only data
      return copy;
    }

    virtual string getFullName() const;
    string getEmail() const { return email; }
    string getID() const { return ID; }

    bool save() const;


protected:
    virtual string makeFullName();
};

#endif // USER_H
