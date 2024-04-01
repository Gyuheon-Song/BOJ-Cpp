# include <iostream>
# include <deque>

using std::cin;
using std::cout;
using std::deque;

struct values
{
    int balloon_num;
    int movecnt;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tmp;
    deque<values> dq;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        values vv = { i + 1, tmp };
        dq.push_back(vv);
    }


    while (true) {
        int move_cnt = dq.front().movecnt;
        cout << dq.front().balloon_num << ' ';
        dq.pop_front();
        if (dq.empty()) {
            break;
        }
        if (move_cnt > 0) {
            for (int i = 0; i < move_cnt - 1; ++i) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            for (int i = move_cnt; i < 0; ++i) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}
