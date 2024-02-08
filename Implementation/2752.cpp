# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int num[4] = { a, b, c };


    while (true) {

        bool sorted = true;

        for (int i = 0; i < 2; i++) {
            if (num[i] > num[i + 1]) {
                int tmp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = tmp;
                sorted = false;
            }
        }

        if (sorted) {
                break;
        }
        
    }

    for (int j = 0; j < 3; j++) {
        cout << num[j] << " ";
    }

    return 0;
}