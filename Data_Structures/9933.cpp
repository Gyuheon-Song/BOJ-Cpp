# include <iostream>
# include <string>
# include <set>
# include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::set;
using std::reverse;

int main() {
    short n;
    string s;
    set<string> pwset;
    cin >> n;
    while (n--) {
        cin >> s;
        pwset.insert(s);
    }

    auto it = pwset.begin();

    for (string word : pwset) {
        string tmp = word;
        reverse(tmp.begin(), tmp.end());
        auto tmp_it = pwset.find(tmp);
        if (tmp_it != pwset.end()) {
            cout << word.size() << ' ' << word[word.size() / 2];
            break;
        }
    }

    return 0;
}