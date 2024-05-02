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
    
    vector<vector<int>> dp(len+1, vector<int>(26, 0)); // 2���� dp -> ���� �ܾ��� �� �ڸ�, ���� a~z���ĺ��� ������
    // dp�� i��° ���� word�� i-1�� �ε��� �ڸ��� �ǹ�
    for (int i = 1; i <= len; ++i) {
        for (int j = 0; j < 26; ++j) {
            dp[i][j] = dp[i - 1][j];  // ������ �ڸ������� �� ���ĺ� �� �������� ���
        }
        dp[i][word[i-1] - 'a']++; // ���� �ڸ��� ���ĺ� ++
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