# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {

    int n, ans;
    ans = 0;
    n = 0;
    
    for (int i = 0; i < 4; i++) {
        int on, off;
        cin >> off >> on;
        n += on - off;
        if (n > ans) {
            ans = n;
        }
    }

    cout << ans;

    return 0;
}