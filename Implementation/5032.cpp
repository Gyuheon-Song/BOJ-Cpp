# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
    int emptyBottle, foundBottle, changeRate, ans, k;   // ��, �濡�� ã�� ��, ��ȯ����, ����, �ѹ� ��ȯ�ؼ� ���Ƕ� ����� �� + ������ ��ȯ�ϰ� ���� ��
    scanf("%d %d %d", &emptyBottle, &foundBottle, &changeRate);

    ans = (emptyBottle + foundBottle) / changeRate;   // �ϴ� ó���� ������ �ִ� ����� ��ȯ�ؼ� ���Ŵ�
    k = (ans) + ((emptyBottle + foundBottle) % changeRate);   // ��� ���Ḧ ���ùǷν� ����� �� �� + ��� �� ��ȯ�ϰ� ���Ҵ� ����

    while (k / changeRate != 0) {   // �ѹ� ��ȯ�ؼ� ���� ������ ������ �ִ� �� ���� ������ ��ȯ�������� Ŭ ��
        ans += k / changeRate;    // ��� ��ȯ�ؼ� ���Ŵ�
        k = (k / changeRate) + (k % changeRate);   // ��ȯ�ؼ� ���ô� ��ŭ�� �� ���� ����� ��ȯ�Ҷ����� �������� ���� ���� ����, �ѹ� ��ȯ�ؼ� ���Ƕ����� ���� ������ �ִ� ���� ����
    }

    printf("%d", ans);

    return 0;
}