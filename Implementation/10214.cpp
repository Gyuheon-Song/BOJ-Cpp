# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = t; i > 0; i--) {
        int y = 0;
        int k = 0;
        for (int j = 0; j < 9; j++) {
            int yscore, kscore;
            cin >> yscore >> kscore;
            y += yscore;
            k += kscore;
        }
        
        if (y > k) {
            cout << "Yonsei" << endl;;
        }
        else if (y < k) {
            cout << "Korea" << endl;;
        }
        else if (y == k){
            cout << "Draw" << endl;;
        }
    }
    return 0;
}