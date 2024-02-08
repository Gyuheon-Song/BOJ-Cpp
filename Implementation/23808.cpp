# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2*n; i++) {
        for (int j = 0; j < 5 * n; j++) {
            if (j < n) {
                cout << "@";
            }
            else if ((j >= 0) && (j < 4 * n)) {
                cout << " ";
            }
            else if (j>=4*n){
                cout << "@";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5 * n; j++) {
            cout << "@";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5 * n; j++) {
            if (j < n) {
                cout << "@";
            }
            else if (j >= 0 && j < 4 * n) {
                cout << " ";
            }
            else {
                cout << "@";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5 * n; j++) {
            cout << "@";
        }
        cout << endl;
    }
    return 0;
}