/*
*C++primer(第五版) 
*练习11.17 
*2015/10/8 
*问题描述：
练习11.17：假定c是一个string的multiset，v是一个string的vector，解释下面的调用。指出每个调用是否合法。
copy(v.begin(),v.end(),inserter(c,c.end()));
copy(v.begin(),v.end(),back_inserter(c));
copy(c.begin(),c.end(),inserter(v,v.end()));
copy(c.begin(),c.end(),back_inserter(v));

*说明：为了看效果，需要把注释的一个一个去掉，单独看一句copy 
*作者：Nick Feng 
*邮箱：nickgreen23@163.com 
*/ 

#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    multiset<string> c = {"good","good","best","never","let","it","rest"};
    vector<string> v = {"good2","good2","best2","never2","let2","it2","rest2"};
     copy(v.begin(),v.end(),inserter(c, c.begin()));//正确 
    //copy(v.begin(),v.end(),back_inserter(c)); //错误 multiset没有push_back这个操作，尾插法不适合 
    //copy(c.begin(),c.end(),inserter(v,v.end()));//正确 
    //  copy(c.begin(),c.end(),back_inserter(v));//正确 

    for(vector<string>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
        cout << endl;

    for(multiset<string>::iterator it = c.begin(); it != c.end(); ++it)
        cout << *it << " ";
        cout << endl;

    system("pause");
    return 0;
}