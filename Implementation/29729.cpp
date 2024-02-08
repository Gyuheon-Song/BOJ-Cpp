# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int s, n, m, cnt;
    cin >> s >> n >> m;
    cnt = 0;
    
    for (int i = 0; i < n + m; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            cnt += 1;
            if (s < cnt) {
                s *= 2; 
            }
            else {
                continue;
            }
        }
        else if (t == 0) {
            cnt -= 1;
        }
    }
    cout << s;
    return 0;
}