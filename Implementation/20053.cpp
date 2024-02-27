# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, iMin = 1000001, iMax = -1000001;
        cin >> n;
        while (n--) {
            int k;
            cin >> k;
            iMin = min(k, iMin);
            iMax = max(k, iMax);
        }
        cout << iMin << ' ' << iMax << '\n';
    }

    return 0;
}