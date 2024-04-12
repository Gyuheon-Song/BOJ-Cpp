# include <iostream>

using std::cin;
using std::cout;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, k;
    int ans = 0;
    cin >> n;
    while (n--) {
        cin >> c >> k;
        ans += (c * k);
    }

    cout << ans;

    return 0;
}