# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>
# include <string>

using std::cin;
using std::cout;
using std::vector;
using std::string;

short dr[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
short dc[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short n;
    cin >> n;
    vector<string> v_input;
    vector<vector<char>> ans(n, vector<char>(n, '0'));
    for (short i = 0; i < n; ++i) {
        string s;
        cin >> s;
        v_input.push_back(s);
    }
    
    for (short i = 0; i < n; ++i) {
        for (short j = 0; j < n; ++j) {
            if (v_input[i][j] != '.') {
                ans[i][j] = '*';
                for (short k = 0; k < 8; ++k) {
                    short nr = i + dr[k];
                    short nc = j + dc[k];
                    if (0 <= nr && nr < n && 0 <= nc && nc < n) {
                        if (ans[nr][nc] != '*') {
                            ans[nr][nc] += (v_input[i][j] - 48);
                        }
                    }
                }
            }
        }
    }

    for (short i = 0; i < n; ++i) {
        for (short j = 0; j < n; ++j) {
            if ('0' <= ans[i][j] && ans[i][j] <= '9') {
                cout << ans[i][j];
            }
            else if (ans[i][j] == '*') {
                cout << ans[i][j];
            }
            else {
                cout << 'M';
            }
        }
        cout << '\n';
    }

    return 0;
}