#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> sk;
    string str;
    while (cin >> str) {
        sk.push(str);
        if (cin.get() == '\n') break;
    }
    while (!sk.empty()) {
        if (sk.size() == 1) cout << sk.top();
        else cout << sk.top() << " ";
        sk.pop();
    }

    return 0;
}
