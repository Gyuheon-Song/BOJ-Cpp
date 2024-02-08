# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, m;
    int numbers[1001];
    int ans=0;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> numbers[i];
    }

    for (int num = 1; num <= n; num++) {
        for (int j = 0; j < m; j++){
            if (num % numbers[j] == 0) {
                ans += num;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}