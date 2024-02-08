# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int n, r1, r2, r3;
    cin >> n;

    r1 = n * (n + 1) / 2;
    r2 = r1*r1;
    r3 = r1*r1;

    cout << r1 << endl << r2 << endl << r3;
    return 0;
}