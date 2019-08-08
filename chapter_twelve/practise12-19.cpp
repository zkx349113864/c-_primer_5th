#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <fstream>
#include <stdexcept>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::make_shared;
using std::out_of_range;
using std::initializer_list;

class StrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;

public:

    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();
    const std::string &front();
    const std::string &back();

    StrBlobPtr begin();
    StrBlobPtr end();

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;

};

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
};

const string &StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

const string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

class StrBlobPtr {
    friend bool eq(const StrBlobPtr&, const StrBlobPtr&);
    public:
        StrBlobPtr() : curr(0) {};
        StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {};
        string &deref() const;
        StrBlobPtr &incr();
    private:
        std::shared_ptr<vector<string>> check(std::size_t, const std::string&) const;
        std::weak_ptr<vector<string>> wptr;
        std::size_t curr;
};

std::shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const
{
    auto ret = wptr.lock(); // vector还存在吗
    if(!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string &StrBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr()
{
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

inline StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end()
{
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}

inline bool eq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
    if (l == r)
        return (!r || lhs.curr == rhs.curr);
    else
        return false;
}

inline bool neq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return !eq(lhs, rhs);
}

int main()
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << b2.size() << endl;
    }
    cout << b1.size() << endl;
    cout << b1.front() << " " << b1.back() << endl;

    for (auto it = b1.begin(); neq(it, b1.end()); it.incr())
        cout << it.deref() << endl;
    
    system("pause");
    return 0;

}