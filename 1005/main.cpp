#include <iostream>

using namespace std;

int main() {
    int state[101]={0};
    int n;
    int cNum;
    int index;

    cin >> n;
    while (n--) {
        cin >> cNum;
        while (cNum != 1) {
            index = cNum;
            if (state[index] ==0) {
                state[index] = 1;
                if (cNum % 2 == 0) cNum = cNum / 2;
                else cNum = (cNum * 3 + 1) / 2;
                if (cNum <= 100) state[index] = 1;
            }
        }
    }
    //  for (int i = sizeof(state) / sizeof(int); i > 0; i++) {
    //      if (state[i] == 1) cout << state[i] << " ";
    // }
    return 0;
}
