# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <stdio.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < 2*n - 1; i++) {
        if (i < n) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int k = 2 * n - 1; k-2*i > 0; k--) {
                cout << "*";
            }
            puts("");
        }
        else {
            for (int l = 2*(n-1) - i; l > 0; l--) {
                cout << " ";
            }
            for (int m = 0; m < 2*(i-n+1) + 1; m++) {
                cout << "*";
            }
            puts("");
        }
    }

    return 0;
}