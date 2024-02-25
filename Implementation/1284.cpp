# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {    
    while (true) {
        short number;
        short ans = 1;
        cin >> number;
        if (number == 0) break;
        while (number > 0) {
            if (number % 10 == 0) {
                ans += 4;
            }
            else if (number % 10 == 1) {
                ans += 2;
            }
            else {
                ans += 3;
            }
            ans += 1;
            number /= 10;
        }
        cout << ans << endl;;
    }

    return 0;
}