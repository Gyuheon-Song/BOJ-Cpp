# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k, tmp = 0;
    cin >> n;
    long long total = ((n - 1) * (n)) / 2;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        tmp += k;
    }

    cout << tmp - total;

    return 0;
}