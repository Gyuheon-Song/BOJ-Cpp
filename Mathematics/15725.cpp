# include <iostream>
# include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
    string f;
    cin >> f;
    bool flag = false;
    for (int i = 0; i < f.size(); ++i) {
        if (f[i] == 'x') {
            flag = true;
        }
    }

    if (flag) {
        for (int j = 0; j < f.size(); ++j) {
            if (f[j] == 'x') {
                if (j == 0) {
                    cout << 1;
                    break;
                }
                else if (j == 1 && f[j-1] == '-') {
                    cout << 1;
                    break;
                }
                break;
            }
            cout << f[j];
        }
    }

    else {
        cout << 0;
    }

    return 0;
}