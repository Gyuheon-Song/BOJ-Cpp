# define _CRT_SECURE_NO_WARNINGS
# define SHRT_MAX 32767

# include <iostream>
# include <vector>
# include <math.h>

using std::cin;
using std::cout;
using std::vector;
using std::pair;

short min(short a, short b)
{
    return a > b ? b : a;
}

double Distance(pair<short, short> pre, pair<short, short> post)
{
    return sqrt((post.first - pre.first) * (post.first - pre.first) + (post.second - pre.second) * (post.second - pre.second));
}

void MakeList(vector<pair<short, short>>& list, short& ans, bool* vis, vector<pair<short, short>> o_list)
{
    if (list.size() == 4) {
        double d = 0;
        for (int i = 0; i < 3; ++i) {
            d += Distance(list[i], list[i + 1]);
        }
        ans = min(ans, (short) d);
        return;
    }
    else {
        for (int i = 1; i < 4; ++i) {
            if (!vis[i]) {
                list.push_back(o_list[i]);
                vis[i] = true;
                MakeList(list, ans, vis, o_list);
                list.pop_back();
                vis[i] = false;
            }
        }
    }
}

int main() {
    short x, y;
    short ans = SHRT_MAX;
    vector<pair<short, short>> v;
    vector<pair<short, short>> tmp_v;
    bool visited[4] = { false, false, false, false };
    for (int i = 0; i < 4; ++i) {
        cin >> x >> y;
        v.push_back({ x, y });
    }

    tmp_v.push_back(v[0]);
    visited[0] = true;

    MakeList(tmp_v, ans, visited, v);
    
    cout << ans;
    return 0;
}