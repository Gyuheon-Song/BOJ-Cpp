# include <stdio.h>
# pragma warning(disable:4996)

int main() {
    int n;
    scanf("%d", &n);
    int k = n;

    while (n > 0) {
        for (int i = 0; i < k - n; i++) {
            printf(" ");
        }
        for (int j = n; j > 0; j--) {
                printf("*");
        }
        n--;
        puts("");
    }
    return 0;
}