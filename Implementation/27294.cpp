# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int t, s;

    cin >> t >> s;

    if (s == 0) {
        if (12 <= t && t <= 16) {
            cout << 320;
        }
        else {
            cout << 280;
        }
    }

    else {
        cout << 280;
    }
    return 0;
}