# include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS
# pragma warning(disable:4996)

int main() {
    unsigned int n;

    scanf("%u", &n);
    
    while (n > 0) {
        printf("%u", n--);
        puts("");
    }
    return 0;
}