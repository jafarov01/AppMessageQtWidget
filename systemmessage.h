#ifndef SYSTEMMESSAGE_H
#define SYSTEMMESSAGE_H

#include "message.h"

class SystemMessage : public Message
{
public:
    SystemMessage();
    SystemMessage(User *sender, User *receiver,
                  const string& message);
    string getMessageType() override;
    bool save() const override;
};

#endif // SYSTEMMESSAGE_H
