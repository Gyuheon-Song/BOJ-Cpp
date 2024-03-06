# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>
# include <algorithm>

using std::cin;
using std::cout;
using std::vector;


int main() {
    int n, k;
    vector<int> v;
    cin >> n >> k;
    for (int i = 1; i < n + 1; ++i) {
        v.push_back(i);
    }

    int cnt = 1, j = 0, init_size = n;
    cout << '<';
    while (init_size) {
        j = (j + k - 1) % init_size;
        int x = v[j];
        if (init_size == n) {
            cout << v[j];
        }
        else {
            cout << ", " << v[j];
        }
        const auto new_end(remove(v.begin(), v.end(), x));
        v.erase(new_end, v.end());
        v.shrink_to_fit();
        --init_size;
    }
    cout << '>';

    return 0;
}