#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i < num; i+=2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int count = 0;
    cin >> n;
    for (int i = 2; i <= n - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            count++;
        }

    }
    cout << count;
    return 0;
}



