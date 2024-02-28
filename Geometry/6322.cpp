# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <math.h>
# include <iomanip>

using std::cin;
using std::cout;
using std::setprecision;
using std::fixed;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    unsigned short i = 1;
    
    while (true) {
        cin >> a >> b >> c;
        if (a == 0) {
            break;
        }
        
        if (a == -1) {
            if (c <= b) {
                cout << "Triangle #" << i << '\n';
                cout << "Impossible." << '\n';
            }
            else {
                a = sqrt(pow(c, 2) - pow(b, 2));
                cout << "Triangle #" << i << '\n';
                cout << "a = " << fixed << setprecision(3) << a << '\n';
            }
        }

        else if (b == -1) {
            if (c <= a) {
                cout << "Triangle #" << i << '\n';
                cout << "Impossible." << '\n';
            }
            else {
                b = sqrt(pow(c, 2) - pow(a, 2));
                cout << "Triangle #" << i << '\n';
                cout << "b = " << fixed << setprecision(3) << b << '\n';
            }
        }

        else {
            c = sqrt(pow(a, 2) + pow(b, 2));
            cout << "Triangle #" << i << '\n';
            cout << "c = " << fixed << setprecision(3) << c << '\n';
        }
        
        cout << '\n';
        ++i;
    }

    return 0;
}