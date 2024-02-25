# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
    long long triangle[101] = { 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12 };
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        int k;
        scanf("%d", &k);
        if (k <= 11) {
            printf("%d\n", triangle[k - 1]);
        }
        else {
            for (int j = 11; j < k; ++j) {
                triangle[j] = triangle[j - 1] + triangle[j - 5];
            }
            printf("%lld\n", triangle[k - 1]);
        }
    }

    return 0;
}