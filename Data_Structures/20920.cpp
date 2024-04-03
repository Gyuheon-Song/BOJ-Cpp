# include <iostream>
# include <map>
# include <string>
# include <vector>
# include <algorithm>

using std::cin;
using std::cout;
using std::map;
using std::string;
using std::pair;
using std::vector;
using std::sort;

struct Compare {
    bool operator() (const pair<int, string>& pair_A, const pair<int, string>& pair_B) const {
        if (pair_A.first == pair_B.first) {
            if (pair_A.second.length() == pair_B.second.length()) {
                return pair_A.second < pair_B.second;
            }
            else {
                return pair_A.second.length() > pair_B.second.length();
            }
        }
        return pair_A.first > pair_B.first;
    }
};  

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    map < string, int > wordmap;
    while (n--) {
        cin >> s;
        if (s.length() >= m) {
            if (wordmap.find(s) != wordmap.end()) {
                ++wordmap[s];
            }
            else {
                wordmap.insert({ s, 1 });
            }
        }
    }

    vector<pair<int, string>> v;
    for (auto& pairs : wordmap) {
        v.push_back({ pairs.second, pairs.first });
    }

    sort(v.begin(), v.end(), Compare());

    for (auto& p : v) {
        cout << p.second << '\n';
    }

    return 0;
}