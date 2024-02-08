# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {

    while (true) {
        char name[10];
        int age, weight;

        cin >> name >> age >> weight;

        if (age == 0 || weight == 0) break;

        if (age > 17 || weight >= 80) {
            cout << name << " Senior" << endl;
        }
        else {
            cout << name << " Junior" << endl;
        }
    }

    return 0;
}