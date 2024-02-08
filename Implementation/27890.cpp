# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int x, t;
    cin >> x >> t;

    while (t > 0) {
        if (x % 2 == 0) {

            x /= 2;
            x ^= 6;
        }
        else {
            x *= 2;
            x ^= 6;
        }
        t -= 1;
    }

    cout << x;

    return 0;
}