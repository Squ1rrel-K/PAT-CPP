#include <iostream>

using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[(i + m) % n];
    }
    for (int i = 0; i < n; i++) {
        if (i == n - 1) cout << arr[i];
        else cout << arr[i] << " ";

    }
    return 0;
}
