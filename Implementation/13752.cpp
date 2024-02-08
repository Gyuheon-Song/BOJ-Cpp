# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = t; 0 < i; i--) {
        int n;
        cin >> n;
        for (int j = n; 0 < j; j--) {
            cout << "=";
        }
        puts("");
    }
    return 0;
}