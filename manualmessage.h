#ifndef MANUALMESSAGE_H
#define MANUALMESSAGE_H

#include "message.h"

class ManualMessage : public Message
{
public:
    ManualMessage();
    ManualMessage(User* sender,  User* receiver,
                  const string& message);
    string getMessageType() override;
    bool save() const override;
};

#endif // MANUALMESSAGE_H
