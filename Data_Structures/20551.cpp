# include <iostream>
# include <unordered_map>
# include <algorithm>
# include <vector>

using std::cin;
using std::cout;
using std::unordered_map;
using std::vector;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, tmp, idx = 0;
    cin >> n >> m;
    unordered_map<int, int> i_map;
    vector<int> v;

    while (n--) {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i) {
        if (i_map.find(v[i]) == i_map.end()) {
            i_map.insert({ v[i], i });
        }
    }

    while (m--) {
        cin >> tmp;
        if (i_map.find(tmp) != i_map.end()) {
            cout << i_map[tmp] << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }

    return 0;
}