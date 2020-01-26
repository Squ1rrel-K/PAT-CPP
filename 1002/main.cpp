#include <iostream>

using namespace std;

int main() {
    string input;
    int sum = 0;
    string arr[10] = {
            "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"
    };

    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        sum += input[i] - '0';
    }

    string res = to_string(sum);

    for (int i = 0; i < res.size(); i++) {
        // If reach the end, cout end
        if (i == res.size() - 1) {
            cout << arr[res[i] - '0'];
            cout << endl;
        }
            // else print number and space
        else {
            cout << arr[res[i] - '0'];
            cout << " ";

        }
    }
}
