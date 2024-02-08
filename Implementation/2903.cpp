# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, k = 2;
    cin >> n;

    while (n--) {
        k += (k - 1);
    }

    cout << k*k;
    return 0;
}