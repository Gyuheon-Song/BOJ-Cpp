# define _CRt_sECURE_NO_WARNINGS
# include <iostream>

using std::cin;
using std::cout;

int main() {
    unsigned long long n, k;
    cin >> n >> k;
    cout << n * n * k;
    return 0;
}