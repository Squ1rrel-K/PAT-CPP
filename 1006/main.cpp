#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    int g = num % 10;
    num = (num - g) / 10;

    int s = num % 10;
    num = (num - s) / 10;

    int b = num % 10;
    while (b--) {
        cout << "B";
    }
    while (s--) {
        cout << "S";
    }
    for (int i = 1; i <=g; i++) {
        cout << i;
    }
    return 0;
}
