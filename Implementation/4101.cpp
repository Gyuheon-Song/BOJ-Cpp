# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using namespace std;

int main() {
    int a, b;

    while (true){
        
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        else {
            if (a > b) {
                cout << "Yes";
            }
            else {
                cout << "No";
            }
        }
        puts("");
    }
    
    return 0;
}