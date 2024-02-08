# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (b <= a - 1) {

        cout << 2 * b + 1;
    }
    else {
        cout << 2 * a - 1;
    }

    return 0;
}