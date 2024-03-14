# include <iostream>

using std::cin;
using std::cout;
short board[5][5];
short dr[4]{ -1, 0, 1, 0 };
short dc[4]{ 0, 1, 0, -1 };
short movecnt{ 10000 };

short min(short a, short b)
{
    return a >= b ? b : a;
}

void eatThreeApples(short rcur, short ccur, short (&tBoard)[5][5], short cnt, short moves)
{
    if (cnt == 3) {
        movecnt = min(movecnt, moves);
        return;
    }

    for (int i = 0; i < 4; ++i) {
        short nr = rcur + dr[i];
        short nc = ccur + dc[i];
        if (0 <= nr && nr < 5 && 0 <= nc && nc < 5) {
            if (tBoard[nr][nc] == -1) {
                continue;
            }
            else {
                short k = tBoard[rcur][ccur];
                if (tBoard[nr][nc] == 0) {
                    tBoard[rcur][ccur] = -1;
                    eatThreeApples(nr, nc,tBoard, cnt, moves + 1);
                    tBoard[rcur][ccur] = k;
                }
                else {
                    tBoard[rcur][ccur] = -1;
                    eatThreeApples(nr, nc, tBoard, cnt + 1, moves + 1);
                    tBoard[rcur][ccur] = k;
                }
            }
        }
    }
}


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> board[i][j];
        }
    }

    short r, c;
    cin >> r >> c;
    short apple{ 0 };
    if (board[r][c] == 1) {
        ++apple;
    }

    eatThreeApples(r, c, board, apple, 0);

    if (movecnt == 10000) {
        cout << -1;
    }
    else {
        cout << movecnt;
    }

    return 0;
}