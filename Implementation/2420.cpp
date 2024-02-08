# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    long long n, m, ans;
    cin >> n >> m;

    ans = n - m;

    if (ans < 0) {
        cout << -ans;
    }
    else {
        cout << ans;
    }
    return 0;
}