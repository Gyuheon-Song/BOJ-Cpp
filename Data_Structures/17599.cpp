# include <iostream>
# include <set>

using std::cin;
using std::cout;
using std::set;

int main() {
    set<int> myset;
    int n, tmp;
    cin >> n;
    while (n--) {
        cin >> tmp;
        myset.insert(tmp);
    }

    cout << myset.size();

    return 0;
}