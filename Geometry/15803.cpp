# define _CRT_SECURE_NO_WARNINGS
# include <iostream>

using std::cin;
using std::cout;


int main() {
    short x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x1 == x2 && x2 == x3) {    // �� ���� ���� x��ǥ�� ���� �� ��������
        cout << "WHERE IS MY CHICKEN?";
    }
    else if (y1 == y2 && y2 == y3) {  // �� ���� ���� y��ǥ�� ���� �� ��������
        cout << "WHERE IS MY CHICKEN?";
    }
    else{
        if (x1 == x2 || x2 == x3) {   // ��� �� ���� x��ǥ�� ���� �� �������� ���� �ʴ�
            cout << "WINNER WINNER CHICKEN DINNER!";
        }
        else if (y1 == y2 || y2 == y3) {   // ��� �� ���� y��ǥ�� ���� �� �������� ���� �ʴ�
            cout << "WINNER WINNER CHICKEN DINNER!";
        }
        else {   // �� ���� x, y��ǥ�� ��� �ٸ� ���
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