# include <iostream>

using std::cin;
using std::cout;

int main() {
    long long a, l, ans;
    cin >> a >> l;
    long long len = std::abs(l - a) + 1;
    long long end = (a + l);
 
    if (len % 2 == 0) {
        cout << (len / 2) * end << '\n';
    }
    else {
        cout << (end / 2) * len << '\n';
    }

    return 0;
}