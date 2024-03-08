# define _crt_secure_no_warnings
# include <iostream>
# include <string>
# include <algorithm>

using std::string;
using std::cout;
using std::cin;

string s, t, ss, tt;
int lcm_v;

int GCD(int a, int b) {
    if (!b) return a;
    return GCD(b, a % b);
}

int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

int main() {
    cin >> s >> t;
    lcm_v = LCM(s.size(), t.size());
    for (int i = 0; i < lcm_v / s.size(); i++) ss += s;
    for (int i = 0; i < lcm_v / t.size(); i++) tt += t;
    cout << (ss == tt);
    return 0;
}