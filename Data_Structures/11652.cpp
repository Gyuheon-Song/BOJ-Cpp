# include <iostream>
# include <map>

using std::cin;
using std::cout;
using std::map;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, tmp;
    cin >> n;
    map<long long, long long> num_map;
    while (n--) {
        cin >> tmp;
        if (num_map.find(tmp) != num_map.end()) {
            ++num_map[tmp];
        }
        else {
            num_map.insert({ tmp, 1 });
        }
    }

    auto it = num_map.begin();
    long long curmax = 0;
    long long ans = 0;
    for (; it != num_map.end(); ++it) {
        if (it->second > curmax) {
            curmax = it->second;
            ans = it->first;
        }
    }

    cout << ans;

    return 0;
}