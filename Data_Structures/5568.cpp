# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <set>

using namespace std;

char card[10][10];
char choice[4][10];
bool visit[10];
int n, k;
set<int> s;

int dfs(int cnt) {
    //k���� ���������� ���ڿ��� set�� ����
    if (cnt == k) {
        char str[20] = "\0";
        for (int i = 0; i < k; i++)
            strcat(str, choice[i]);
        s.insert(atoi(str));
    }

    //k�� �����ϴ� ���
    for (int i = 0; i < n; i++) {
        //�湮���� ���� ���̸�
        if (!visit[i]) {
            visit[i] = true;//�湮
            //���ڿ� ���� ���̱�
            strcpy(choice[cnt], card[i]);
            //1�߰��ؼ� ���� dfs ������
            dfs(cnt + 1);
            //dfs Ż���ϸ� �湮����� false��
            visit[i] = false;
        }
    }
    return 0;
}

int main() {
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%s", card[i]);
    }
    dfs(0);
    printf("%d\n", s.size());
    return 0;
}