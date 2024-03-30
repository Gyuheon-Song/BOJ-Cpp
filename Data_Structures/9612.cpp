# include <iostream>
# include <map>
# include <string>

using std::cin;
using std::cout;
using std::map;
using std::string;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, short> wordmap;
    string s;
    short n;
    cin >> n;
    while (n--) {
        cin >> s;
        if (wordmap.find(s) != wordmap.end()) {
            ++wordmap[s];
        }
        else {
            wordmap.insert({ s, 1 });
        }
    }

    auto it = wordmap.begin();
    short t = 0;
    string ans;
    for (; it != wordmap.end(); ++it) {
        if (it->second >= t) {
            ans = it->first;
            t = it->second;
        }
    }

    cout << ans << ' ' << t;

    return 0;
}