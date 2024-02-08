# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {

    long long a, b, cost;
    cin >> a >> b;
    cin >> cost;

    if (a + b < 2*cost) {
        cout << a + b;
    }
    else {
        cout << a + b - 2*cost;
    }    

    return 0;
}