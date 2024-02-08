# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m+1; j++) {
            int k = i * m;
            if ((k + j) % m == 0) {
                cout << k+j << '\n';
            }
            else {
                cout << k + j << ' ';
            }
        }
    }
    return 0;
}