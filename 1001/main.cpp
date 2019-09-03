#include <iostream>
#include <string>

using namespace std;
int a = 0;
int b = 0;
int sum = 0;

int main() {


    cin >> a >> b;
    sum = a + b;

    if (sum < 0) {
        cout << "-";
        sum = -sum;
    }
    if (sum < 1000) {
        cout << sum << endl;
    } else if (sum < 1000000) {
        string str = to_string(sum);
        str.insert(str.size() - 3, ",");
        cout << str << endl;
    } else {
        string str = to_string(sum);
        str.insert(str.size() - 6, ",");
        str.insert(str.size() - 3, ",");
        cout << str << endl;
    }

    return 0;

}