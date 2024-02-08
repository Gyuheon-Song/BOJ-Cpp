# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, ans;
    ans = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    int tmp = a;

    if (tmp < 0) {
        ans = (-tmp) * (c) + d + b*e;
    }

    else if (tmp == 0) {
        ans = d + b * e;
    }

    else {
        ans = (b-a) * e;
    }

    cout << ans;
    return 0;
}