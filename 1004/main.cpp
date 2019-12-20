#include <iostream>

using namespace std;

struct student {
    string name, id;
    int score;
};

int main() {
    student tem;
    student max{"", "", 0};
    student min{"", "", 100};
    int n;
    cin >> n;
    while (n--) {
        cin >> tem.name >> tem.id >> tem.score;
        max = tem.score > max.score ? tem : max;
        min = tem.score < min.score ? tem : min;
    }
    cout << max.name << " " << max.id << "\n";
    cout << min.name << " " << min.id << endl;

    return 0;
}
