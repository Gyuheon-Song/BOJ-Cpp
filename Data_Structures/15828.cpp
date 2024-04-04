# include <iostream>
# include <queue>

using std::cin;
using std::cout;
using std::queue;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, tmp;
    cin >> n;
    queue<int> q;

    while (1) {
        cin >> tmp;
        if (tmp == -1) {
            break;
        }
        if (tmp == 0) {
            q.pop();
        }
        else {
            if (q.size() >= n) {
                continue;
            }
            else {
                q.push(tmp);
            }
        }
    }
    
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}