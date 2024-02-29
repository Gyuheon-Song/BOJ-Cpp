# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <cmath>
# include <iomanip>

# define PI 3.141592653589793

using std::cin;
using std::cout;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(2);
    for (double x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;) {
        double d = hypot(x3 - x2, y3 - y2);
        double ax = x2 - x1, ay = y2 - y1, bx = x3 - x1, by = y3 - y1;
        double theta = acos((ax * bx + ay * by) / hypot(ax, ay) / hypot(bx, by));
        cout << std::fixed << d / sin(theta) * PI << '\n';
    }    

    return 0;
}