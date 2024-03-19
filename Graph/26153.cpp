#include <iostream>
#include <vector>
using namespace std;

struct RC 
{
    int r;    //���ȣ
    int c;    //����ȣ
    int dir;  //����ĭ->�ش�ĭ�� ����
    int cnt;  //�ش�ĭ���� ���̰� ���� �������� ��
    int sum;  //�ش�ĭ������ ���� ��

    RC(int r, int c, int dir, int cnt, int sum) {  // ������ �����ε�
        this->r = r;
        this->c = c;
        this->dir = dir;
        this->cnt = cnt;
        this->sum = sum;
    }
};

int dr[] = { 1, -1, 0, 0 };
int dc[] = { 0, 0, 1, -1 };
int n;
int m;
vector<vector<int>> map;
vector<vector<bool>> visited;
int sum;
int start_r;
int start_c;

void DFS(RC start) {
    if (visited[start.r][start.c]) {
        return;  // �ش� ĭ�� �湮�� ���� �ִ� ��� ����
    }
    sum = max(sum, start.sum);  // ������ ���� ���� �ִ밪�� �ش�ĭ������ ���� �� �ִ� ���� �� �� �ִ� �����ϰ� ����
    if (start.cnt == 0) {  // ����ĭ���� ���� ���� �������� ���� ���
        return;
    }

    for (int i = 0; i < 4; i++) {  // �ֺ��� 4ĭ�� ����
        int nr = start.r + dr[i];
        int nc = start.c + dc[i];
        if (nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
        if (nr == start_r && nc == start_c) continue;

        visited[start.r][start.c] = true;  // �湮ó��

        if (start.dir != -1 && start.dir != i) {  // ���� ����ĭ�� �ƴϸ鼭 ������ Ʋ������ ���
            // �������� 2�� �̻� �����ִٸ� �޶��� ����, ������ ��-2, ����ĭ�� ���Ǿ絵 ���Ͽ� ���ڷ� �����Ѵ�
            if (start.cnt - 2 >= 0) DFS(RC(nr, nc, i, start.cnt - 2, start.sum + map[nr][nc]));
        }
        else {  // ����ĭ�̰ų� �״���� ������ �����ϴ� ���
            // �����, ��������-1, ����ĭ�� ���� ���� ���Ͽ� ���ڷ� ����
            DFS(RC(nr, nc, i, start.cnt - 1, start.sum + map[nr][nc]));
        }
        visited[start.r][start.c] = false;  // �湮����
    }
}

int main() {
    cin >> n >> m;

    map.resize(n, vector<int>(m));
    visited.resize(n, vector<bool>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }
    cin >> start_r >> start_c;
    int cnt;
    cin >> cnt;
    sum = map[start_r][start_c];  // ���� ĭ�� ���� �� �̸� ����
    DFS(RC(start_r, start_c, -1, cnt, map[start_r][start_c]));  // DFS
    cout << sum << endl;

    return 0;
}