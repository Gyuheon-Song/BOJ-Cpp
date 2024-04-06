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
    int n, k = 0, limit, ans = 0;
    char game_type;
    string name;
    unordered_map<string, string> namemap;
    

    cin >> n >> game_type;
    switch (game_type) {
    case 'Y':
        limit = 1;
        break;
    case 'F':
        limit = 2;
        break;
    case 'O':
        limit = 3;
        break;
    }

    while (n--) {
        cin >> name;
        if (namemap.find(name) != namemap.end()) {
            continue;
        }
        else {
            namemap.insert({ name, name });
            ++k;
            if (k == limit) {
                ++ans;
                k = 0;
            }
        }
    }
    cout << ans;

    return 0;
}