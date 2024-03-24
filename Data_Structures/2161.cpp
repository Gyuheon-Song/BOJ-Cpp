# include <iostream>
# include <deque>
# include <string>

using std::deque;
using std::string;
using std::cin;
using std::cout;

int main() {
    deque<short> dq;
    short n;
    cin >> n;

    for (short i = 1; i < n + 1; ++i) {
        dq.push_back(i);
    }

    while (true) {
        if (dq.size() == 1) {
            cout << dq[0];
            break;
        }
        cout << dq[0] << ' ';
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }

    return 0;
}