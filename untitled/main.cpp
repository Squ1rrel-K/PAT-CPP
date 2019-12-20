#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str = "AAPAATAAAA";
    smatch result;
    regex pattern("A+");	//匹配四个数字

    string::const_iterator iterStart = str.begin();
    string::const_iterator iterEnd = str.end();
    string temp;
    while (regex_search(iterStart, iterEnd, result, pattern))
    {
        temp = result[0];
        cout << temp << " ";
        iterStart = result[0].second;	//更新搜索起始位置,搜索剩下的字符串
    }
}
