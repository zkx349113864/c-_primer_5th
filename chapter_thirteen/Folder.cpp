#include <utility>
#include <iostream>
#include <string>
#include "Folder.h"

using namespace std;

void swap(Message &lhs, Message &rhs)
{
    using std::swap;
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);

    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, rhs.folders);

    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);

}

void Message::save(Folder &f)
{
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message &msg)
{
    for (auto f : msg.folders)
        f->addMsg(this);
}

void Message::remove_from_Folders()
{
    for (auto f: folders)
        f->remMsg(this);
}

M