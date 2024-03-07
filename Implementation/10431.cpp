# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::distance;


int main() {
    short p, t;
    cin >> p;
    vector<int> v;
    for (int i = 0; i < p; ++i) {
        short ans = 0;
        cin >> t;
        for (int j = 0; j < 20; ++j) {
            int n;
            cin >> n;
            if (j == 0) {
                v.push_back(n);
                continue;
            }
            for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
                if (*it > n) {
                    ans += (short) distance(it, v.end());
                    v.insert(it, n);
                    break;
                }
                else if (it == v.end() - 1) {
                    v.push_back(n);
                    break;
                }
            }
        }
        v.clear();
        cout << t << ' ' << ans << '\n';
    }

    return 0;
}