#include <iostream>
#include <string>
#include <memory>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::allocator;

int main()
{
    allocator<string> alloc;
    auto const p = alloc.allocate(10);
    // size_t count = 0;
    auto q = p;
    string s;
    while (cin >> s && q != p + 10)
    {
        alloc.construct(q++, s);
        // --q;
    }
    // auto beg = p.begin();
    while (q != p)
    {
        /* cout << *q << " ";
        ++q; */

		cout << *p << endl;

		alloc.destroy(--q);
    }
    system("pause");
    return 0;
}
