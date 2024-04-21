# include <iostream>

using std::cin;
using std::cout;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    
    cin >> t;
    while (t--) {
        cin >> n;
        int q = 0, d = 0, ni = 0, p = 0;
        while (n>=25) {
            n -= 25;
            ++q;
        }
        while (n>=10) {
            n -= 10;
            ++d;
        }
        while (n >= 5) {
            n -= 5;
            ++ni;
        }
        p = n;
        cout << q << ' ' << d << ' ' << ni << ' ' << p << '\n';
    }

    return 0;
}