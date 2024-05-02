# include <iostream>
# include <string>
# include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    cin >> word;
    int len = word.length();
    
    vector<vector<int>> dp(len+1, vector<int>(26, 0)); // 2차원 dp -> 행은 단어의 각 자리, 열은 a~z알파벳의 누적합
    // dp의 i번째 행이 word의 i-1번 인덱스 자리를 의미
    for (int i = 1; i <= len; ++i) {
        for (int j = 0; j < 26; ++j) {
            dp[i][j] = dp[i - 1][j];  // 이전의 자리까지의 각 알파벳 별 누적합을 계승
        }
        dp[i][word[i-1] - 'a']++; // 현재 자리의 알파벳 ++
    }

    int q, a, b, ans;
    char ch;
    cin >> q;
    while (q--) {
        cin >> ch >> a >> b;
        ans = dp[b+1][ch - 'a'] - dp[a][ch - 'a'];
        cout << ans << '\n';
    }

    return 0;
}