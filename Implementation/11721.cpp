# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    char s[101];
    cin >> s;
    char* ps = s;

    while ((*ps) != 0) {
        for (int i = 0; i < 10; i++) {
            cout << *ps;
            ps++;
            if ((*ps) == 0) {
                break;
            }
        }
        cout << endl;
    }

    return 0;
}