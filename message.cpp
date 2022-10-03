#include "message.h"

Message::Message(QObject *parent)
    : QObject{parent}
{

}

Message::Message(User *sender, User *receiver, const string &message)
{
    this->receiver = (receiver->clone());
    this->sender = (sender->clone());
    this->message = message;

    ttime = time(0);
}

string Message::getTime() const
{
    char* dt = ctime(&ttime);
    return dt;
}
