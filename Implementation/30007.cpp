# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int t, a, b, x, w;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> x;
        w = a * (x - 1) + b;
        cout << w << endl;
    }

    return 0;
}