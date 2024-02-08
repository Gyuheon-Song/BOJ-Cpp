# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    for (int i = 0; i < 3; ++i) {
        cin >> a >> b >> c >> d;
        int score = a + b + c + d;
        switch (score) {
        case 0: cout << "D" << endl;; break;
        case 1: cout << "C" << endl; break;
        case 2: cout << "B" << endl; break;
        case 3: cout << "A" << endl; break;
        case 4: cout << "E" << endl; break;
        }
    }
    return 0;
}