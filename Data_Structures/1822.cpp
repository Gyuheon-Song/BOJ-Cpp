# include <iostream>
# include <map>
# include <unordered_map>

using std::cin;
using std::cout;
using std::unordered_map;
using std::map;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    map<int, bool> a;
    unordered_map<int, bool> b;
    map<int, int> anslst;
    cin >> n >> m;
    int tmp;
    int ans = 0;
    while (n--) {
        cin >> tmp;
        a.insert({ tmp, true });
        ++ans;
    }
    
    while (m--) {
        cin >> tmp;
        if (a.end() != a.find(tmp)) {
            auto it = a.find(tmp);
            it->second &= false;
            --ans;
        }
    }

    if (ans == 0) {
        cout << 0;
        exit(0);
    }

    cout << ans << '\n';
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (it->second) {
            cout << it->first << ' ';
        }
    }

    return 0;
}