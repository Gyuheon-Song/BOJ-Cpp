# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using std::cin;
using std::cout;


int main() {
    short x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x1 == x2 && x2 == x3) {    // 세 점이 같은 x좌표를 가질 때 일직선상
        cout << "WHERE IS MY CHICKEN?";
    }
    else if (y1 == y2 && y2 == y3) {  // 세 점이 같은 y좌표를 가질 때 일직선상
        cout << "WHERE IS MY CHICKEN?";
    }
    else{
        if (x1 == x2 || x2 == x3) {   // 어느 두 점의 x좌표가 같을 때 일직선상에 있지 않다
            cout << "WINNER WINNER CHICKEN DINNER!";
        }
        else if (y1 == y2 || y2 == y3) {   // 어느 두 점의 y좌표가 같을 때 일직선상에 있지 않다
            cout << "WINNER WINNER CHICKEN DINNER!";
        }
        else {   // 세 점의 x, y좌표가 모두 다른 경우
            if ((y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1)) {
                cout << "WINNER WINNER CHICKEN DINNER!";
            }
            else {
                cout << "WHERE IS MY CHICKEN?";
            }
        }
    }

    return 0;
}