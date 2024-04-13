# include <iostream>

using std::cin;
using std::cout;

int main() {
    short e, s, m;
    cin >> e >> s >> m;
    short tmp_e = 1, tmp_s = 1, tmp_m = 1;
    unsigned int ans = 1;

    while (true) {
        if (e == tmp_e && s == tmp_s && m == tmp_m) {
            cout << ans;
            break;
        }
        else {
            ++tmp_e;
            ++tmp_s;
            ++tmp_m;
            ++ans;
            if (tmp_e == 16) {
                tmp_e = 1;
            }
            if (tmp_s == 29) {
                tmp_s = 1;
            }
            if (tmp_m == 20) {
                tmp_m = 1;
            }
        }
    }

    return 0;
}