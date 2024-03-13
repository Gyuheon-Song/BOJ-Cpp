# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <string>
# include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    vector<char> v;
    getline(cin, s);
    bool flag = false;
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '<') {
            if (v.size()) {
                while (v.size()) {
                    char tmp = v.back();
                    cout << tmp;
                    v.pop_back();
                }
            }
            flag = true;
            cout << s[i];
            continue;
        }
        else if (s[i] == '>') {
            flag = false;
            cout << s[i];
            continue;
        }
        else {
            if (flag) {
                cout << s[i];
            }
            else {
                if (s[i] == ' ' || i == s.size() - 1) {
                    if (i == s.size() - 1) {
                        v.push_back(s[i]);
                    }
                    if (v.size()) {
                        while (v.size()) {
                            char tmp = v.back();
                            cout << tmp;
                            v.pop_back();
                        }
                    }
                    if (s[i] == ' ') {
                        cout << s[i];
                    }
                }
                else {
                    v.push_back(s[i]);
                }
            }
        }
    }
    return 0;
}