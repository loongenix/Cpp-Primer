#pragma once
#include "Message.h"
#include <set>
class Folder
{
  private:
    std::set<Message *> messages;

  public:
    Folder(const Folder &);
    Folder& operator=(Folder &);
    ~Folder();

    void addMsg(Message *);
    void remMsg(Message *);
};
