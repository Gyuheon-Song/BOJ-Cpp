# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <cstring>

using namespace std;

int main() {
    char s[10];

    cin >> s;

    if (strcmp(s, "SONGDO") == 0) {
        cout << "HIGHSCHOOL";
    }
    else if (strcmp(s, "CODE") == 0) {
        cout << "MASTER";
    }
    else if (strcmp(s, "2023") == 0) {
        cout << "0611";
    }
    else if (strcmp(s, "ALGORITHM") == 0) {
        cout << "CONTEST";
    }
    return 0;
}