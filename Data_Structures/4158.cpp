# include <iostream>
# include <unordered_map>

using std::cin;
using std::cout;
using std::unordered_map;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, tmp, ans;
    unordered_map<int, int> my_set;

    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }
        ans = 0;
        my_set.clear();

        while (n--) {
            cin >> tmp;
            my_set.insert({ tmp, tmp });
        }

        while (m--) {
            cin >> tmp;
            if (my_set.find(tmp) != my_set.end()) {
                ++ans;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}