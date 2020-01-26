#include <iostream>

using namespace std;

int main() {
    int state[101] = {0};
    state[1] = 1;

    int n;
    int cNum = 0;

    cin >> n;
    int input[n];

    for (int i = 0; i < n; i++) {
        cin >> cNum;
        input[i] = cNum;

        while (cNum != 1) {
            if (cNum % 2 == 0) cNum = cNum / 2;
            else cNum = (cNum * 3 + 1) / 2;
            if (cNum <= 100) state[cNum] = 1;
        }
    }
    for (int i = 1; i < 101; i++) {
        for (int j = 0; j < n; j++) {
            if (state[i] == 1 && input[j] == i) {
                input[j] = 0;
            }

        }
    }
    for (int i = n; i > 0; i--) {
        if (input[i] != 0 && input[i] <= 100) cout << input[i] << " ";

    }
    return 0;
}
