# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
    int emptyBottle, foundBottle, changeRate, ans, k;   // 빈병, 길에서 찾은 것, 교환비율, 정답, 한번 교환해서 마실때 생기는 병 + 이전에 교환하고 남은 병
    scanf("%d %d %d", &emptyBottle, &foundBottle, &changeRate);

    ans = (emptyBottle + foundBottle) / changeRate;   // 일단 처음에 가지고 있는 병들로 교환해서 마신다
    k = (ans) + ((emptyBottle + foundBottle) % changeRate);   // 방금 음료를 마시므로써 생기는 빈 병 + 방금 병 교환하고 남았던 병들

    while (k / changeRate != 0) {   // 한번 교환해서 마실 때마다 가지고 있는 총 병의 개수가 교환비율보다 클 때
        ans += k / changeRate;    // 계속 교환해서 마신다
        k = (k / changeRate) + (k % changeRate);   // 교환해서 마시는 만큼의 빈 병이 생기고 교환할때마다 남겨지는 병을 더한 것이, 한번 교환해서 마실때마다 내가 가지고 있는 병의 개수
    }

    printf("%d", ans);

    return 0;
}