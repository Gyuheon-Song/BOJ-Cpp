# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, player1, player2;
        cin >> n;
        player1 = 0;
        player2 = 0;
        for (int j = 0; j < n; j++) {
            char p1, p2;
            cin >> p1 >> p2;
            if (p1 == p2) continue;
            else if (p1 == 'R') {
                if (p2 == 'P') {
                    player2 += 1;
                }
                else {
                    player1 += 1;
                }
            }
            else if (p1 == 'P') {
                if (p2 == 'S') {
                    player2 += 1;
                }
                else {
                    player1 += 1;
                }
            }
            else if (p1 == 'S') {
                if (p2 == 'R') {
                    player2 += 1;
                }
                else {
                    player1 += 1;
                }
            }
        }
        if (player1 == player2) cout << "TIE" << endl;

        else if (player1 > player2 ? cout << "Player 1" << endl : cout << "Player 2" << endl);
    }

    return 0;
}