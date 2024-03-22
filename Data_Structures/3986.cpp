# include <iostream>
# include <vector>
# include <string>

using std::cin;
using std::cout;
using std::vector;
using std::string;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    string s;
    vector<char> v;

    while (n--) {
        cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            if (v.empty()) {
                v.push_back(s[i]);
            }
            else {
                if (s[i] == v.back()) {
                    v.pop_back();
                }
                else {
                    v.push_back(s[i]);
                }
            }
        }
        if (v.empty()) {
            ++ans;
        }
        v.clear();
    }

    cout << ans;

    return 0;
}