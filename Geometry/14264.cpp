# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <math.h>
# include <iomanip>

using std::cin;
using std::cout;
using std::setprecision;

int main() {
    double l;
    double ans;
    cin >> l;
    ans = l * (l / 2.0) * sqrt(3) / 2.0;
    cout << std::fixed << setprecision(10) << ans;

    return 0;
}