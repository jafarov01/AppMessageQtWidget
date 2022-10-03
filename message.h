#ifndef MESSAGE_H
#define MESSAGE_H

#include "user.h"
using namespace std;

class Message : public QObject
{
    Q_OBJECT
public:
    explicit Message(QObject *parent = nullptr);

    Message();
    Message(User *sender, User *receiver, const string &message);
    string getSenderFullName() const {return sender->getFullName();}
    string getReceiverFullName() const {return receiver->getFullName();}
    string getMessage() const {return message;}
    string getTime() const;
    virtual string getMessageType() = 0;
    virtual bool save() const = 0;

protected:
    User *sender;
    User *receiver;
    string message;
    time_t ttime;
    string messageType;
};

#endif // MESSAGE_H
