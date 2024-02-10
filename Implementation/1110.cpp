# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    int nn = n;

    while (1) {
        int k = n / 10;
        int l = n % 10;
        int j = k + l;
        n = l * 10 + j % 10;
        cnt++;
        if (n == nn) {
            break;
        }
    }
    cout << cnt << '\n';

    return 0;
}