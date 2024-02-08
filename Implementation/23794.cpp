# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n + 2; i++) {

        if (i == 0 || i == n+1) {
            for (int j = 0; j < n + 2; j++) {
                cout << "@";
            }
        }
        else {
            cout << "@";

            for (int k = 0; k < n; k++) {
                cout << " ";
            }

            cout << "@";
        }
        puts("");
    }
    return 0;
}