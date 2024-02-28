# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <math.h>
# include <vector>
# include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        vector<long long> lst;
        int n = 3;
        while (n--) {
            long long k;
            cin >> k;
            lst.push_back(k);
        }
        sort(lst.begin(), lst.end());
        cout << (lst[0] + lst[1]) * (lst[0] + lst[1]) + lst[2] * lst[2] << '\n';      
    }

    return 0;
}