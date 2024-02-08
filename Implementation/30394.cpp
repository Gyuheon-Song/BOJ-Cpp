# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    long x, y;
    int t;
    cin >> t;
    long mn = 10e9;
    long mx = -10e9;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        mn = min(y, mn);
        mx = max(y, mx);
    }
    cout << mx - mn;
    return 0;
}