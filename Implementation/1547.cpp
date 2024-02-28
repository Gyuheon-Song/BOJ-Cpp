# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using std::cin;
using std::cout;

int main() {
    short m;
    bool ball[4] { false, true, false, false };
    short ans = 1;
    cin >> m;

    while (m--) {
        short cup1, cup2;
        cin >> cup1 >> cup2;
        if (ball[cup1] || ball[cup2]) {
            ans = ball[cup1] ? cup2 : cup1;
            ball[cup1] = !ball[cup1];
            ball[cup2] = !ball[cup2];
        }
        else {
            continue;
        }
    }

    cout << ans;

    return 0;
}