# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <map>


int main() {
    std::map<short, short> lst;
    short h, total = 0;

    for (int i = 0; i < 9; ++i) {
        std::cin >> h;
        total += h;
        lst.insert(std::make_pair(h, h));
    }

    std::map<short, short>::iterator it, it2;
    total -= 100;

    for (it = lst.begin(); it != lst.end(); ++it) {
        for (it2 = it; it2 != lst.end(); ++it2) {
            if (it->first != it2->first) {
                if (it->first + it2->first == total) {
                    it = lst.erase(it);
                    it2 = lst.erase(it2);
                    for (it = lst.begin(); it != lst.end(); ++it) {
                        std::cout << it->first << '\n';
                    }
                    exit(0);
                }
            }
        }
    }
    
    return 0;
}