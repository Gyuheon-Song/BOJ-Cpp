# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <math.h>
# include <vector>

using std::cin;
using std::cout;

int main() {
    long long a, b, c, x1, x2, y1, y2;
    cin >> a >> b >> c >> x1 >> x2 >> y1 >> y2;
    long long x[2]{ x1, x2 };
    long long y[2]{ y1, y2 };
    short k = 0, t = 0;

    for (long long i : x) {
        for (long long j : y) {
            if (a * i + b * j + c > 0) {
                k += 1;
            }
            else if(a * i + b * j + c < 0){
                k -= 1;
            }
            else {
                t += 1;
            }
        }
    }

    if (k > 0) {
        if (k + t == 4) {
            cout << "Lucky";
        }
        else {
            cout << "Poor";
        }
    }
    else {
        if (k - t == -4) {
            cout << "Lucky";
        }
        else {
            cout << "Poor";
        }
    }

    return 0;
}