#include <iostream>
#include <vector>
using namespace std;

struct RC 
{
    int r;    //행번호
    int c;    //열번호
    int dir;  //이전칸->해당칸의 방향
    int cnt;  //해당칸까지 쓰이고 남은 파이프의 수
    int sum;  //해당칸까지의 물의 합

    RC(int r, int c, int dir, int cnt, int sum) {  // 생성자 오버로딩
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
        return;  // 해당 칸을 방문한 적이 있는 경우 리턴
    }
    sum = max(sum, start.sum);  // 기존의 물의 양의 최대값과 해당칸까지의 얻을 수 있는 물의 양 중 최댓값 저장하고 리턴
    if (start.cnt == 0) {  // 현재칸에서 이제 남은 파이프가 없는 경우
        return;
    }

    for (int i = 0; i < 4; i++) {  // 주변의 4칸에 대해
        int nr = start.r + dr[i];
        int nc = start.c + dc[i];
        if (nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
        if (nr == start_r && nc == start_c) continue;

        visited[start.r][start.c] = true;  // 방문처리

        if (start.dir != -1 && start.dir != i) {  // 만약 시작칸이 아니면서 방향이 틀어지는 경우
            // 파이프가 2개 이상 남아있다면 달라진 방향, 파이프 수-2, 다음칸의 물의양도 더하여 인자로 전달한다
            if (start.cnt - 2 >= 0) DFS(RC(nr, nc, i, start.cnt - 2, start.sum + map[nr][nc]));
        }
        else {  // 시작칸이거나 그대로의 방향을 유지하는 경우
            // 방향과, 파이프수-1, 다음칸의 물의 양을 더하여 인자로 전달
            DFS(RC(nr, nc, i, start.cnt - 1, start.sum + map[nr][nc]));
        }
        visited[start.r][start.c] = false;  // 방문해제
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
    sum = map[start_r][start_c];  // 시작 칸의 물의 양 미리 포함
    DFS(RC(start_r, start_c, -1, cnt, map[start_r][start_c]));  // DFS
    cout << sum << endl;

    return 0;
}