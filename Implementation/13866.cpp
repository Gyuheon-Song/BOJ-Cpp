# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << abs(a + d - b - c);
    return 0;
}