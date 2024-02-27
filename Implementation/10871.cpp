# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>

using namespace std;

int main() {
    int n, x;
    vector<int> numlst;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        numlst.push_back(k);
    }

    vector<int>::iterator it;

    for (it = numlst.begin(); it != numlst.end(); ++it) {
        if (*it < x) {
            cout << *it << ' ';
        }
    }

    return 0;
}