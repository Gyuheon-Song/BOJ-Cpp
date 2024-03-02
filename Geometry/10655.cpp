# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>


using std::cin;
using std::cout;
using std::vector;
using std::pair;

int TaxiDistance(vector<pair<short, short>>::iterator pre, vector<pair<short, short>>::iterator post) {
    return (int)abs(post->first - pre->first) + (int)abs(post->second - pre->second);
}


int main() {
    int n;
    int iTotal = 0;
    int iAns = 987654321;
    vector<pair<short, short>> v;
    cin >> n;
    while (n--) {
        short x, y;
        cin >> x >> y;
        v.push_back({ x, y });
        if (v.size() > 1) {
            iTotal += TaxiDistance(v.end()-2, v.end()-1);
        }
    }

    for (vector<pair<short, short>>::iterator it = v.begin() + 1; it != v.end() - 2; ++it) {
        int iDistDiff = TaxiDistance(it - 1, it) + TaxiDistance(it, it + 1) - TaxiDistance(it - 1, it + 1);
        if (iAns > iTotal - iDistDiff) {
            iAns = iTotal - iDistDiff;
        }
    }
    cout << iAns;

    return 0;
}