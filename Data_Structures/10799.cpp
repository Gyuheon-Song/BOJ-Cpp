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
    vector<char> stack;
    int len_stack = 0, ans = 0;

    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            stack.push_back('(');
            ++len_stack;
        }
        else {
            if (i > 0 && s[i-1] == '(') {
                stack.pop_back();
                --len_stack;
                ans += len_stack;
            }
            else {
                ++ans;
                stack.pop_back();
                --len_stack;
            }
        }
    }
    
    cout << ans;

    return 0;
}