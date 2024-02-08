# include <stdio.h>
# pragma warning(disable:4996)

int main() {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        n--;
        puts("");
    }
}