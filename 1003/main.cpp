#include <iostream>
#include <regex>
/*注意事项：
 * 条件1，2都非常简单
 * 条件3要难点在于条件是递归式的，简单计算易得， a * b = c
 * c++ 应该使用 "\\" 保证转义，如 "\\1"
 * 正则迭代器注意不能用 "A*" 等无底线要求，会无限迭代
 * 最后输出注意空行 "\n"
 * */
using namespace std;

int num = 0;
string str;
regex regex_1("[P|A|T]+");//满足条件一
regex regex_2("(A*)PAT\\1");//满足条件二直接输出
regex regex_3("A*PA+TA*");//条件三的大前提
regex regex_4("A+");//找到 A 的数量

bool checkString(string str) {
    int i = 0;
    bool r1, r2, r3, r4;
    smatch result;
    string temp[3];
    string::const_iterator iterStart = str.begin();
    string::const_iterator iterEnd = str.end();

    r1 = regex_match(str, regex_1);
    r2 = regex_match(str, regex_2);
    r3 = regex_match(str, regex_3);


    //使用迭代器，将正则匹配到的结果存在 temp[] 里
    while (regex_search(iterStart, iterEnd, result, regex_4)) {
        temp[i++] = result[0];
        iterStart = result[0].second;
    }

    //满足 a * b = c
    r4 = ((temp[0].size() * temp[1].size() == temp[2].size()));

    //r1 必须满足，r2 或 r3 && r4 满足即可
    if (r1 && (r2 || (r3 && r4))) {
        return true;
    } else return false;
}

int main() {
    cin >> num;
    string arr[num];
    for (int i = 0; i < num; i++) {
        cin >> str;
        if (checkString(str)) {
            arr[i] = "YES";
        } else arr[i] = "NO";
    }
    for (int i = 0; i < num; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}

