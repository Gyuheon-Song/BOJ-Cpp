# include <iostream>

using std::cin;
using std::cout;

int main() {
    long long dp[101][10]{ 0 };
    long long ans = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= 9; ++i) {
        dp[1][i] = 1;
    }
    
    for (int i = 2; i < 101; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][1];
            }
            else if (j == 9) {
                dp[i][j] = dp[i - 1][8];
            }
            else {
                dp[i][j] = (dp[i - 1][j - 1] % 1000000000 + dp[i - 1][j + 1] % 1000000000) % 1000000000;
            }
        }
    }

    for (int k = 0; k < 10; ++k) {
        ans = (ans + dp[n][k]) % 1000000000;
    }
    
    cout << ans;

    return 0;
}