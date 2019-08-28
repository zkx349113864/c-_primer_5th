#include <iostream>
#include <string>
#include <set>
using std::string;
using std::set;

class Message {
    friend class Folder;
public:
    // folders 被隐式初始化为空集合
    explicit Message(const string &str = ""): contents(str) {}
    // 拷贝控制成员，用来管理指向本Message的指针
    Message(const Message&);        // 拷贝构造函数
    Message& operator=(const Message&); // 拷贝赋值运算符
    ~Message();
    // 从给定Folder集合中添加/删除本message
    void save(Folder&);
    void remove(Folder&);

private:
    string contents;            // 实际消息文本
    set<Folder*> folders;       // 包含本Message的Folder
    // 拷贝构造函数、拷贝赋值运算符和析构函数所使用的工具函数
    // 将本message添加到指向参数Folder中
    void add_to_Folders(const Message&);
    // 从folders中的每个Folder中删除本message
    void remove_from_Folders();
};

void Message::save(Folder &f)
{
    folders.insert(&f);     // 将给定Folder添加到我们的Folder列表中
    f.addMsg(this);         // 将本Message添加到f的Message集合中
}

void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg(this);
}

// 将本Message添加到指向m的Folder中
void Message::add_to_Folders(const Message &n)
{
    for (auto f : m.folders)        // 对每个包含m的Folder
        f->addMsg(this);            // 向该Folder添加一个指向本Message的指针
}

Message::Message(const Message &m): contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);
}

void Message::remove_from_Folders()
{
    for (auto f : folders)
        f->remMsg(this);
}

Message::~Message()
{
    remove_from_Folders();
}

class Folder {
private:
    void addMsg(Folder&);
};
