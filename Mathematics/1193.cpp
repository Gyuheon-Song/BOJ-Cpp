# include <iostream>

using std::cin;
using std::cout;

int main() {
    int x, n = 0;;
    cin >> x;

    while (n * (n + 1) < 2 * x) {
        ++n;
    }

    int prev = n - 1;
    int prev_sum = (prev * (prev + 1)) / 2;

    if (n % 2 == 0) {
        cout << x - prev_sum << '/' << n+1-x+prev_sum;
    }
    else {
        cout << n + 1 - x + prev_sum << '/' << x - prev_sum;
    }
    return 0;
}