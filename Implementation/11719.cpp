# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <string>



int main() {
    std::string s;

    while (!std::cin.eof()) {
        getline(std::cin, s);
        std::cout << s << std::endl;
    }

    return 0;
}