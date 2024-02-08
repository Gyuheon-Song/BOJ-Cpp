# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <string>

using namespace std;

int main() {
    string chess[8];
    int ans = 0;

    for (int i = 0; i < 8; i++) {
        getline(cin, chess[i]);
        for (int j = 0; j < 8; j++) {
            if (chess[i][j] == 'P') {
                ans += 1;
            }
            else if (chess[i][j] == 'p') {
                ans -= 1;
            }
            else if (chess[i][j] == 'N' || chess[i][j] == 'B') {
                ans += 3;
            }
            else if (chess[i][j] == 'n' || chess[i][j] == 'b') {
                ans -= 3;
            }
            else if (chess[i][j] == 'R') {
                ans += 5;
            }
            else if (chess[i][j] == 'r') {
                ans -= 5;
            }
            else if (chess[i][j] == 'Q') {
                ans += 9;
            }
            else if (chess[i][j] == 'q') {
                ans -= 9;
            }
            else {
                continue;
            }
        }

    }
    std::cout << ans;
    return 0;
}