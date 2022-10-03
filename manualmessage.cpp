#include "manualmessage.h"

ManualMessage::ManualMessage(User* sender,  User* receiver, const string& message) : Message(sender, receiver, message)
{}

string ManualMessage::getMessageType()
{
    return "Manual";
}

bool ManualMessage::save() const
{
    return true;
}
