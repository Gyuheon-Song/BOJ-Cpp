# include <iostream>

using std::cin;
using std::cout;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    short t;
    cin >> t;
    short a, b;
    while (t--) {
        short n, m;
        cin >> n >> m;
        while (m--) {
            cin >> a >> b;
        }
        cout << n - 1 << '\n';
    }
    return 0;
}