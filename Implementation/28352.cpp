# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, ans;
    cin >> n;
    ans = 6;

    for (int i = 11; i < n + 1; i++) {
        ans *= i;
    }

    cout << ans;
    return 0;
}