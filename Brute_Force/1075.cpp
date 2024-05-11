# include <iostream>

using std::cin;
using std::cout;

int main() {
    int n, f, ans;
    
    cin >> n >> f;
    n -= (n % 100);
    while (true) {
        if (n % f == 0) {
            break;
        }
        ++n;
    }
    ans = n % 100;
    if (ans >= 10 ? cout << ans << '\n' : cout << '0' << ans << '\n');

    return 0;
}