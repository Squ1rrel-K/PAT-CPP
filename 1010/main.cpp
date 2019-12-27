#include <iostream>

using namespace std;
struct Poly {
    int coefficient;
    int index;
};
Poly poly;
int main() {
        while (1) {
            cin >> poly.coefficient;
            cin >> poly.index;
            if (poly.index == 0||poly.coefficient==0);
            else {
                poly.coefficient = poly.coefficient * poly.index;
                poly.index = poly.index - 1;
                if (poly.index == 0) cout << poly.coefficient << " " << poly.index;
                else cout << poly.coefficient << " " << poly.index << " ";
            }
            if (cin.get() == '\n') break;

        }


    return 0;
}
