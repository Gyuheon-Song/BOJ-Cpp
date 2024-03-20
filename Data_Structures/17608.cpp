# include <iostream>
# include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
    int n, k, cnt = 1;
    cin >> n;
    vector<int> v{};
    for (int i = 0; i < n; ++i) {
        cin >> k;
        v.push_back(k);
    }
    int t = v.back();
    
    for (int j = n - 2; j >= 0; --j) {
        if (v[j] > t) {
            ++cnt;
            t = v[j];
        }
    }

    cout << cnt;

    return 0;
}