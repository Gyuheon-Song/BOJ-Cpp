# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using std::cin;
using std::cout;

int min(int a, int b)
{
    return a > b ? b : a;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> t;
    while (t--) {
        int indS;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        indS = (x2 - x1) * (y2-y1);
        if (max(x2, x4) - min(x1, x3) < (x2 - x1) + (x4 - x3) && max(y2, y4) - min(y1, y3) < (y2 - y1) + (y4 - y3)) {
            indS = indS - ((x2 - x1) + (x4 - x3) - (max(x2, x4) - min(x1, x3))) * ((y2 - y1) + (y4 - y3) - (max(y2, y4) - min(y1, y3)));
            if (indS <= 0) {
                cout << 0 << '\n';
            }
            else {
                cout << indS << '\n';
            }
        }
        else {
            cout << indS << '\n';
        }    
    }

    return 0;
}