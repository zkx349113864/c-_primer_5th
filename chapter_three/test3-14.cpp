#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
   /*  int v1;
    vector<int> ivec; */
    string v1;
    vector<string> ivec;
    while (cin >> v1) {
        ivec.push_back(v1);
    }
    for (decltype(ivec.size()) n = 0; n < ivec.size(); ++n) {
        cout << ivec[n] << endl;
    }
    system("pause");
    return 0;
}