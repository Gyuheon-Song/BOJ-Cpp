# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        switch (a) {
        case 136:
            ans += 1000;
            break;
        case 142:
            ans += 5000;
            break;
        case 148:
            ans += 10000;
            break;
        case 154:
            ans += 50000;
            break;
        }      
    }

    cout << ans << endl;
    return 0;
}