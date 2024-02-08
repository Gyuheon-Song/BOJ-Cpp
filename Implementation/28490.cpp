# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, w, h, ans;
    cin >> n;
    ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> w >> h;
        ans = ans > (w*h) ? ans : (w * h);
    }

    cout << ans;
    return 0;
}