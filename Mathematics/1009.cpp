# include <iostream>

using std::cin;
using std::cout;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, a, b, ans;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        ans = 1;
        for (int i = 0; i < b; ++i) {
            ans = (ans % 10) * (a % 10) % 10;
        }
        
        if (ans == 0 ? cout << 10 << '\n' : cout << ans << '\n');
    }

    return 0;
}