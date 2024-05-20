#include <iostream>
using namespace std;

void findMax(int a, int b, int c, int d) {
    int max_val = a;

    if (b > max_val) {
        max_val = b;
    }
    if (c > max_val) {
        max_val = c;
    }
    if (d > max_val) {
        max_val = d;
    }

    cout << max_val;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    findMax(a, b, c, d);
    return 0;
}
