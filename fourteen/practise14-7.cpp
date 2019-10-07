#include <iostream>
#include <string>
#include <utility>
#include <memory>
#include <algorithm>
using std::istream;
using std::ostream;
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::allocator;

class String {
    friend ostream &operator<<(ostream &os, String &s);
public:
    String(): element(nullptr), first_free(nullptr) {}
    String(char *);
private:
    static allocator<char> alloc;
    char *element;
    char *first_free;
};

allocator<char> String::alloc;
ostream &operator<<(ostream &os, String &s);

int main()
{
    String s1;
    String s2("hello");
    String s3("hello world");
    cout << s1;
    cout << s2;
    cout << s3;
    system("pause");
    return 0;
}

String::String(char *s)
{
    int i = 0;
    while(s[i] != '\0')
        ++i;
    auto newloc = alloc.allocate(i);
    auto dest = newloc;
    for (auto count = 0; count != i; ++count)
    {
        alloc.construct(dest++, s[count]);
    }
    element = newloc;
    first_free = dest;
}

ostream &operator<<(ostream &os, String &s)
{
    while (s.element != s.first_free)
    {
        os << *(s.element);
        s.element++;
    }
    cout << endl;
    return os;
}