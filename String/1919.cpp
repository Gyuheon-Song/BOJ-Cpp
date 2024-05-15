# include <iostream>
# include <string>
# include <map>

using std::cin;
using std::cout;
using std::string;
using std::map;

int main() {
    string s1, s2;
    map<char, int> map1;
    map<char, int> map2;
    int ans = 0;

    cin >> s1 >> s2;
    char ch;

    for (int i = 0; i < s1.length(); ++i) {
        ch = s1[i];
        if (map1.find(ch) == map1.end()) {
            map1.insert({ ch, 1 });
        }
        else {
            ++map1[ch];
        }
    }

    for (int j = 0; j < s2.length(); ++j) {
        ch = s2[j];
        if (map2.find(ch) == map2.end()) {
            map2.insert({ ch, 1 });
        }
        else {
            ++map2[ch];
        }
    }

    auto it = map1.begin();

    for (; it != map1.end(); ++it) {
        if (map2.find(it->first) == map2.end()) {
            ans += it->second;
        }
        else {
            ans += abs(it->second - map2[it->first]);
            map2.erase(it->first);
        }
    }

    for (auto it = map2.begin(); it != map2.end(); ++it) {
        ans += it->second;
    }

    cout << ans;
    return 0;
}