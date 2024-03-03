# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <math.h>
# include <map>

using std::cin;
using std::cout;
using std::multimap;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    multimap<double, int> robot;
    for (int i = 1; i < n+1; ++i) {
        int x, y, v;
        double t;
        cin >> x >> y >> v;
        t = sqrt(pow(x, 2) + pow(y, 2)) / v;
        robot.insert({ t, i });
    }
    for (multimap<double, int>::iterator it = begin(robot); it != end(robot); ++it) {
        cout << it->second << '\n';
    }

    return 0;
}