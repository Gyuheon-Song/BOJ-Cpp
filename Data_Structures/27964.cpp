# include <iostream>
# include <string>
# include <set>

using std::cin;
using std::cout;
using std::set;
using std::string;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    short n, tnum;
    cin >> n;
    string topping;
    set<string> tmap;

    while (n--) {
        cin >> topping;
        if (topping.size() >= 6 && topping.substr(topping.size() - 6) == "Cheese") {
            tmap.insert(topping);
        }
    }

    tnum = tmap.size();
    if (tnum >= 4) {
        cout << "yummy";
    }
    else {
        cout << "sad";
    }

    return 0;
}