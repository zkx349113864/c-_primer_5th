#include "StrVec.h"

#include <utility>
#include <iterator>
#include <algorithm>

using namespace std;

allocator<string> StrVec::alloc;

void StrVec::push_back(const string &s)
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

pair<string*, string*>
StrVec::alloc_n_copy(const string *b, const string *e)
{
    string *data = alloc.allocate(e - b);
    return make_pair(data, uninitialized_copy(b, e, data));
}

/* void StrVec::free()
{
    if (elements) {
        for (auto p = first_free; p != elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap - elements);
    }
} */

// 用lambda重写free
void StrVec::free()
{
    if (elements) {
        for_each(elements, first_free, [](const string &s){ alloc.destroy(&s); });
        alloc.deallocate(elements, cap - elements);
    }
}

StrVec::StrVec(const StrVec &s)
{
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = newdata.second;
    cap = newdata.second;
}

StrVec::StrVec(const string *b, const string *e)
{
    pair<string*, string*> newdata = alloc_n_copy(b, e);
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::~StrVec() { free(); }

StrVec &StrVec::operator=(const StrVec &rhs)
{
    auto newdata = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = newdata.first;
    first_free = newdata.second;
    cap = newdata.second;
    return *this;
}

void StrVec::reallocate()
{
    auto newcapacity = size() ? size() * 2 : 1;
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
    {
        alloc.construct(dest++, std::move(*elem++));
    }
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}

void StrVec::resize(size_t n)
{
    if (n > size()) {
        while(n > size())
            push_back("");
    } else if (n < size()) {
        while (size() > n)
            alloc.destroy(--first_free);
    }
}

StrVec::StrVec(initializer_list<string> lst)
{
    auto newdata = alloc_n_copy(lst.begin(), lst.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}