# include <iostream>

using std::cin;
using std::cout;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1, x2, a, b, c, d, e;
    cin >> x1 >> x2;
    cin >> a >> b >> c >> d >> e;
    b -= d;
    c -= e;
    
    cout << a * x2 * x2 * x2 / 3 + b * x2 * x2 / 2 + c * x2 - a * x1 * x1 * x1 / 3 - b * x1 * x1 / 2 - c * x1;

    return 0;
}