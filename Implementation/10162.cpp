# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    a = 0;
    b = 0;
    c = 0;

    while (n >= 300) {
        n -= 300;
        a += 1;
    }

    while (n >= 60) {
        n -= 60;
        b += 1;
    }

    while (n >= 10) {
        n -= 10;
        c += 1;
    }

    if (n == 0) {
        cout << a << ' ' << b << ' ' << c;
    }
    else {
        cout << -1;
    }
    return 0;
}