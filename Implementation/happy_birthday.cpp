# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <string>
# include <ctime>

using namespace std;

class Friend {
private :
    int birthYr;
    int birthMonth;
    int birthDay;
    string name;

public :
    Friend(int year, int month, int day, const string& friend_name)
        : birthYr(year), birthMonth(month), birthDay(day), name(friend_name) {}

    int HappyBirthday() {
        time_t now = time(0);
        tm* today = localtime(&now);

        if (today->tm_mday == birthDay && today->tm_mon + 1 == birthMonth) {
            cout << "せせせせ 持析 逐馬球験艦陥 " << name << " 什渋還!  伸因馬淑珠 せせせ" << endl;
        }
        else {
            cout << "持析戚 焼鑑艦陥" << endl;
            return 0;
        }
    }
};

int main() {

    char fullname[20];

    cout << "name : ";
    cin >> fullname;

    Friend seuseung(1998, 10, 23, fullname);

    seuseung.HappyBirthday();

    return 0;
}