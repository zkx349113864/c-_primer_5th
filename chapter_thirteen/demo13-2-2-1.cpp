#include <iostream>
#include <string>
using std::string;

class HasPtr {
public:
    // 构造函数分配新的string和新的计数器，将计数器置为1
    HasPtr(const string &s = string()): ps(new string(s)), i(0), use(new size_t(1)) {}
    HasPtr(const HasPtr &p): ps(p.ps), i(p.i), use(p.use) { ++*use; }
    HasPtr &operator=(const HasPtr&);
    ~HasPtr();

private:
    string *ps;
    int i;
    size_t *use;
};

// 析构函数
HasPtr::~HasPtr()
{
    if (--*use == 0) {      // 如果引用计数变为0
        delete ps;          // 释放string 内存
        delete use;         // 释放计数器内存
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}