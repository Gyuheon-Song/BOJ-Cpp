# include <iostream>
# include <deque>

using std::cin;
using std::cout;
using std::deque;

int main() {
    short n, ans = 0, k = 1, tmp, digit, d;
    deque<short> q;
    cin >> n;
    while (k <= n) {
        tmp = k;
        bool flag(true);
        while (tmp > 0) {
            digit = tmp % 10;
            q.push_front(digit);
            tmp /= 10;
        }
        if (q.size() <= 2) {
            ++ans;
        }
        else {
            d = q[1] - q[0];
            for (short i = 2; i <= q.size() - 1; ++i) {
                if (q[i] - q[i - 1] != d) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ++ans;
            }
        }
        ++k;
        q.clear();
    }

    cout << ans;

    return 0;
}