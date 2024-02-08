# define _crt_secure_no_warnings
# include <iostream>

using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    a = 100;
    b = 100;

    for (int tc = 0; tc < t; tc++) {
        int x, y;
        cin >> x >> y;

        if (x > y)
            b -= x;
        else if (x < y)
            a -= y;
        else
            continue;
    }

    cout << a << '\n' << b;

    return 0;
}