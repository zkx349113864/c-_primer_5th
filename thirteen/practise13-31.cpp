#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace::std;

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0), use(new size_t(1)) {}
    HasPtr(const HasPtr &p): ps(new string(*p.ps)), i(p.i), use(p.use) { ++*use; }
    HasPtr& operator=(HasPtr);
    bool operator<(const HasPtr&);
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
    swap(*this, rhs);
    return *this;
}

bool HasPtr::operator<(const HasPtr &rhs)
{
    return *ps < *rhs.ps;
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

    vector<HasPtr> hv = {h1, h2};
    for (auto h : hv)
    {
        h.str();
    }

    cout << "sort " << endl;
    sort(hv.begin(), hv.end());

    for (auto h : hv)
    {
        h.str();
    }

    system("pause");
    return 0;

}