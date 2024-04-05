# include <iostream>
# include <unordered_map>

using std::cin;
using std::cout;
using std::unordered_map;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, x, w;
    short cmd;
    unordered_map<int, int> ball;

    cin >> m;
    while (m--) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> x >> w;
            ball.insert({ w, x });
        }
        else {
            cin >> w;
            cout << ball[w] << '\n';
        }
    }

    return 0;
}