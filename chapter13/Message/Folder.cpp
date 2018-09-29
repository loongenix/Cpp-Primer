#include "Folder.h"

Folder::~Folder()
{
    
    for(auto m : messages)
    {
        m->removeFolder(this);
    }
    
}
Folder::Folder(const Folder &f) : messages(f.messages)
{

    for (auto m : messages)
    {
        m->addFolder(this);
    }
}

Folder &Folder::operator=(Folder &f)
{

    for (auto m : messages)
    {
        m->removeFolder(this);
    }
    messages=f.messages;
    
    for(auto m : messages)
    {
        m->addFolder(this);
    }
    return *this;
}
void Folder::addMsg(Message *m)
{
    messages.insert(m);
}
void Folder::remMsg(Message *m)
{
    messages.erase(m);
}