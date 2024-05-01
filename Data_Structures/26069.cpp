# include <iostream>
# include <unordered_map>
# include <string>

using std::cin;
using std::cout;
using std::unordered_map;
using std::string;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string a, b;
    unordered_map<string, string> dance_map;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a == "ChongChong" || b == "ChongChong") {
            dance_map.insert({ a, a });
            dance_map.insert({ b, b });
        }
        else {
            if (dance_map.find(a) == dance_map.end() && dance_map.find(b) == dance_map.end()) {
                continue;
            }
            else {
                if (dance_map.find(a) != dance_map.end() && dance_map.find(b) != dance_map.end()) {
                    continue;
                }
                dance_map.insert({ a, a });
                dance_map.insert({ b, b });
            }
        }
    }

    cout << dance_map.size();

    return 0;
}