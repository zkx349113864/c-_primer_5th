#include <iostream>

class Base
{
    protected:
        int prot_name;
};
class Sneaky: public Base {
    friend void clobber(Sneaky&);
    friend void clobber(Base&);
    int j;
};
// 正确：clobber能访问Sneaky对象的private和protected成员
void clobber(Sneaky &s) {
    s.j = s.prot_name = 0;
}
// 错误：clobber不能访问Base的protected成员
// void clobber(Base &b) { b.prot_mem = 0; }
