#include "systemmessage.h"
#include "teacher.h"
#include "student.h"

SystemMessage::SystemMessage(User *sender, User *receiver, const string &message) : Message(sender, receiver, message)
{

}

string SystemMessage::getMessageType()
{
    return "System";
}

bool SystemMessage::save() const
{
    if (qobject_cast<Teacher*>(sender) == NULL || qobject_cast<Student*>(receiver) == NULL)
    {
        return false;
    }
    return true;
}
