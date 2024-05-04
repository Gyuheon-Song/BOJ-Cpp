# include <iostream>
# include <string>
# include <vector>
# include <map>

using std::cin;
using std::cout;
using std::string;
using std::map;
using std::vector;


int main() {
    map<string, vector<long long>> color{ {"black", {0, 1}}, {"brown", {1, 10}}, {"red", {2, 100}}, {"orange", {3, 1000}}, {"yellow", {4, 10000}}, {"green", {5, 100000}}, {"blue", {6, 1000000}}, {"violet", {7, 10000000}}, {"grey", {8, 100000000}},{"white", {9, 1000000000}} };
    string c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    long long res;

    res = (color[c1][0] * 10 + color[c2][0]) * color[c3][1];

    cout << res;

    return 0;
}