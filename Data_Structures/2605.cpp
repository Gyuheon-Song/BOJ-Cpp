# include <iostream>
# include <list>

using std::cin;
using std::cout;
using std::list;

int main() {
    short n;
    cin >> n;
    list<short> linkedLst;
    short t;

    for (short i = 1; i < n + 1; ++i) {
        cin >> t;
        auto it = linkedLst.end();
        while (t--) {
            --it;
        }
        linkedLst.insert(it, i);
    }

    auto it = linkedLst.begin();

    for (it; it != linkedLst.end(); ++it) {
        cout << *it << ' ';
    }


    return 0;
}