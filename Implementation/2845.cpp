# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int  main() {
    int l, p, tmp;
    cin >> l >> p;
    int people[6];

    for (int i = 0; i < 5; i++) {
        cin >> people[i];
    }

    tmp = l * p;

    for (int i = 0; i < 5; i++) {
        people[i] -= tmp;
    }

    for (int i = 0; i < 5; i++) {
        cout << people[i] << " ";
    }

    return 0;
}