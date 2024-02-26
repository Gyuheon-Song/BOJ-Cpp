# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using std::cin;
using std::cout;

int main() {
    int r, w, l, i = 1;

    while (true) {
        cin >> r;
        if (r == 0) {
            break;
        }
        cin >> w >> l;
        if (w * w + l * l > (2 * r)*(2 * r)) {
            cout << "Pizza " << i << " does not fit on the table.\n";
        }
        else {
            cout << "Pizza " << i << " fits on the table.\n";
        }
        ++i;
    }

    return 0;
}