#pragma once;
#include "Folder.h"
#include <string>
#include <set>
class Message
{
    friend class Folder;
private:
    std::string contents;
    std::set<Folder*> folders;
    void add_to_Folders(const Message &);
    void remove_from_Folders();
public:
    explicit Message(const std::string &str=""):contents(str) { }
    Message(const Message &);
    Message & operator=(const Message &);
    void swap(Message &lhs,Message &rhs);
    void save(Folder &);
    void remove(Folder &);
    void addFolder(Folder *);
    void removeFolder(Folder *);
    ~Message();
};