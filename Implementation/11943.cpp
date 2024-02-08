# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if (b + c < a + d) {
        cout << b + c;
    }
    else {
        cout << a + d;
    }
    return 0;
}