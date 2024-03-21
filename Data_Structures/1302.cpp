# include <iostream>
# include <map>
# include <string>

using std::cin;
using std::cout;
using std::map;
using std::string;

int main() {
    short n;
    cin >> n;
    string s;
    map<string, short> m;
    while (n--) {
        cin >> s;
        if (m.find(s) != m.end()) {
            ++m[s];
        }
        else {
            m.insert({ s, 1 });
        }
    }

    short t = 0;
    string ans;

    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->second > t) {
            ans = it->first;
            t = it->second;
        }
    }
    
    cout << ans;

    return 0;
}