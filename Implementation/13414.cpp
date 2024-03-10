# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>
# include <string>
# include <map>
# include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::pair;
using std::map;

int k, l;
vector<string> str;
map<string, int> student;
vector<pair<int, string>> v;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> k >> l;
    for (int i = 0; i < l; i++) {
        string s;
        cin >> s;
        if (student.count(s) != 0)    
            student[s] = i;
        student.insert({ s, i });
    }

    for (auto it = student.begin(); it != student.end(); ++it) {
        v.push_back({ it->second, it->first });
    }
    sort(v.begin(), v.end());

    if (v.size() >= k) {
        for (int i = 0; i < k; i++) {
            cout << v[i].second << '\n';
        }
    }
    else {
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i].second << '\n';
        }
    }
    
    return 0;
}
