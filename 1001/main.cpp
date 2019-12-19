#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int count = 0;
    cin >> n;
    while (n != 1)
    {
        count++;
        if (n % 2 == 0) {
            n = n / 2;

        }
        else {
            n = (3 * n + 1) / 2;
        }
    }
    cout << count;


}

