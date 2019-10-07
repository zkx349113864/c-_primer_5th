#ifndef FOLDER_H
#define FOLDER_H

#include <set>
using std::set;

class Folder {
    friend void swap(Message &, Message &);
    friend class Message;

public:
    Folder() = default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void save(Message&);
    void remove(Message&);
    void debug_print();

private:
    set<Message*> Messages;
    void add_to_Message(const Folder&);
    void remove_from_Message();
    void addMsg(Message*);
    void remMsg(Message*);

};

#endif