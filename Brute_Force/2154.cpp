# include <iostream>
# include <string>

using std::cin;
using std::cout;
using std::string;
using std::to_string;

int main() {
    string s, tmp;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        s += to_string(i);
    }

    int idx = s.find(to_string(n));
    cout << ++idx;
    return 0;
}