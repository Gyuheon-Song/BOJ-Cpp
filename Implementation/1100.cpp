# include <iostream>
# include <string.h>

using std::cin;
using std::cout;
using std::memset;

char arr[9][9];

int main() {
    short ans = 0;

    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 8; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    if (arr[i][j] == 'F') {
                        ++ans;
                    }
                    else {
                        continue;
                    }
                }
                else {
                    continue;
                }
            }
            else {
                if (j % 2 != 0) {
                    if (arr[i][j] == 'F') {
                        ++ans;
                    }
                    else {
                        continue;
                    }
                }
                else {
                    continue;
                }
            }
        }
    }

    cout << ans;

    return 0;
}