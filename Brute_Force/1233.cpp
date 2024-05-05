# include <iostream>
# include <vector>

using std::cin;
using std::cout;

short max(short a, short b) {
    if (a >= b) {
        return a;
    }
    return b;
}

int main() {
    short s1, s2, s3, maxsum = 0, ans;;
    cin >> s1 >> s2 >> s3;
    short v[81]{ 0 };

    for (int i = 1; i <= s1; ++i) {
        for (int j = 1; j <= s2; ++j) {
            for (int k = 1; k <= s3; ++k) {
                ++v[i + j + k];
                if (maxsum < v[i+j+k]){
                    maxsum = v[i + j + k];
                    ans = i + j + k;
                }
            }
        }
    }

    cout << ans;

    return 0;
}