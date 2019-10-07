#include <iostream>
using namespace std;

class Base
{
public:
    void pub_mem();
protected:
    int prot_mem;
private:
    char priv_men;
};

struct Pub_Derv: public Base
{
    int f() { return prot_mem; }
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Pub_Derv" << endl;
    }
};

struct Priv_Derv: private Base
{
    int f1() const { return prot_mem; }
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Priv_Derv" << endl;
    }
};

struct Prot_Derv: protected Base
{
    int f2() { return prot_mem; }
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Prot_Derv" << endl;
    }
};

struct Derived_from_Public: public Pub_Derv
{
    int use_base() { return prot_mem; }
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Derived_from_Public" << endl;
    }
};

/* struct Derived_from_Private: public Priv_Derv
{
    int use_base() { return prot_mem; }
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Derived_from_Private" << endl;
    }
} */

/* struct Derived_from_Protected: protected Prot_Derv
{
    int use_base() { return prot_mem; }
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Derived_from_Protected" << endl;
    }
}; */

int main()
{
    Pub_Derv d1;
    // Priv_Derv d2;
    // Prot_Derv d3;

    // Derived_from_Public dd1;
    // Derived_from_Private dd2;
    // Derived_from_Protected dd3;

    // 用户代码
    Base base;
    // Base *p = &d1;
    // p = &d2;
    // p = &d3;

    // p = &dd1;
    // p = &dd2;
    // p = &dd3;

    // 成员说明
    d1.memfcn(base);
    /* d2.memfcn(base);
    d3.memfcn(base); */

    // 派生类的成员调用
    // dd1.memfcn(base);
    // dd2.memfcn(base);
    // dd3.memfcn(base);

    system("pause");
    return 0;

}