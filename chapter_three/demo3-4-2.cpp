#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<string> svec = {"hello", "world", "i", "am", "learning", "cpp"};
    auto beg = svec.begin(), end = svec.end();
    auto mid = svec.begin() + (end -beg)/2;
    string sought = "am";
    while (mid != end && *mid != sought) {
        if (sought < *mid) {
            end = mid;
        } else {
            beg = mid + 1;
        }
        mid = beg + (end - beg)/2;
    }
}