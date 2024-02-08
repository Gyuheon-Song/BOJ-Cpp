# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            puts("");
        }
        else{
            for (int k = 2 * n - i-1; k > 0; k--) {
                cout << "*";
                }
            puts("");
        }
    }
    return 0;
}