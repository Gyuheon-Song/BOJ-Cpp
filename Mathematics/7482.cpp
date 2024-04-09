# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    double a;
    while (t--) {
        scanf("%lf", &a);
        printf("%.10lf\n", a / 6);
    }

    return 0;
}