# include <iostream>
# include <unordered_map>
# include <map>
# include <vector>
# include <algorithm>

using std::cin;
using std::cout;
using std::unordered_map;
using std::map;
using std::vector;

int main() {
    int n, c, tmp;
    unordered_map<int, bool> visited;   // 방문배열
    map<int, int> freq;   // 각 수의 빈도수를 저장하는 map
    vector<int> v;     // 입력받은 수의 순서열 저장 vector
    vector<int> vv;    // 각 수의 빈도수만을 내림차순으로 저장
    cin >> n >> c;
    while (n--) {
        cin >> tmp;
        visited.insert({ tmp, false });
        v.push_back(tmp);
        if (freq.find(tmp) != freq.end()) {
            ++freq[tmp];
        }
        else {
            freq.insert({ tmp, 1 });
        }
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        vv.push_back(it->second);
    }

    sort(vv.rbegin(), vv.rend());

    for (int i = 0; i < vv.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if (visited[v[j]]) {
                continue;
            }
            else {
                if (freq[v[j]] == vv[i]) {
                    while (vv[i]--) {
                        cout << v[j] << ' ';
                    }
                    visited[v[j]] = true;
                }
            }
        }
    }

    return 0;
}