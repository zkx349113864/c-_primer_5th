#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    // 将words暗字典排序，删除重复单词
    elimDups(words);
    // 按长度排序，长度相同的单词维持字典序
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {return a.size() < b.size();});
    // 获取一个迭代器，指向第一个满足size() >= sz的元素
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a){ return a.size() >= sz; });
    // 计算满足size >= sz的元素的数目
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
    // 打印长度大于等于给定值的单词，每个单词后面接一个空格
    for_each(wc, words.end(), [](const string &s){cout << s << " ";});
    cout << endl;
}

int main()
{
    vector<string> svec{"hello", "asd", "world", "hi", "c++", "asd", "you", "me", "c++", "hi"};
    // elimDups(svec);
    // stable_sort(svec.begin(), svec.end(), isShorter);
    biggies(svec, 3);
    for(auto &s : svec) {
        cout << s << endl;
    }
    system("pause");
    return 0;
}