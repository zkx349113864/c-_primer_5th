#ifndef STRVEC_H
#define STRVEC_H

#include <string>
#include <memory>

using namespace std;

class StrVec {
public:
    StrVec(): elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(const StrVec&);
    StrVec(const std::string*, const std::string*);
    StrVec(initializer_list<string> lst);
    StrVec& operator=(const StrVec&);
    ~StrVec();
    void push_back(const string&);
    size_t size() const { return first_free - elements; }
    size_t capacity() const {  return cap - elements; }
    string *begin() const { return elements; }
    string *end() const { return first_free; }
    void reserve(size_t n) { if (n > capacity()) resize(n); }
    void resize(size_t);
    string& operator[](size_t n) { return elements[n]; }

private:
    static allocator<string> alloc;
    void chk_n_alloc() {
        if (size() == capacity()) reallocate();
    }
    pair<string*, string*> alloc_n_copy(const string*, const string*);
    void free();
    void reallocate();
    string *elements;
    string *first_free;
    string *cap;

};

#endif