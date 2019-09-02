#include <iostream>
#include <string>
#include <vector>
#include <set>
using std::set;
using std::string;
using std::vector;

class Message {
friend class Folder;
public:
    // folders被隐式初始化为空集合
    explicit Message(const string &str = ""): contents(str) {}
    // 拷贝控制成员，用来管理指向Message的指针
    Message(const Message&);    // 拷贝构造函数
    Message& operator=(const Message&); // 拷贝赋值运算符
    ~Message();
    // 从给的Folder集合中添加/删除本Message
    void save(Folder&);
    void remove(Folder&);

private:
    string contents;            // 实际消息文本
    set<Folder*> folders;       // 包含本Message的Folder
    // 拷贝构造函数、拷贝复制运算符和析构函数所使用的工具函数
    void add_to_Folders(const Message&);
    // 从folders中的每个Folder中删除本Message
    void remove_from_Folders();

};