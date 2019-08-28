#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace::std;

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);

public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0), use(new size_t) {}
    HasPtr(const HasPtr &p): ps(new string(*p.ps)), i(p.i), use(p.use) { ++*use; }
    HasPtr& operator=(HasPtr);
    void str() {
        cout << *ps << endl;
    }
    ~HasPtr();

private:
    string *ps;
    int i;
    size_t *use;
};

inline
void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    cout << "swap function" << endl;
    
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

HasPtr& HasPtr::operator=(HasPtr rhs)
{
    cout << "reload" << *(rhs.ps) << endl;
    swap(*this, rhs);
    return *this;
}

HasPtr::~HasPtr()
{
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
}

int main(int argc, char *argv[])
{
    HasPtr h1("dog");
    HasPtr h2("cat");
    HasPtr h3("rat");

    h1.str();
    h2.str();

    h2 = h1;
    h2.str();
    h1.str();

    swap(h1, h3);
    h1.str();
    h3.str();

    system("pause");
    return 0;

}