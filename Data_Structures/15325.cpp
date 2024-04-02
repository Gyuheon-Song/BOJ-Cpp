#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int N;
map<string, int> strtoidx;  // 이름과 순서를 저장하는 map
pair<int, string> pr[100];  // 자신의 인덱스에 자신을 좋아하는 사람의 수와 자신의 이름을 pair로 저장하는 배열

string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int idx = 0; idx < N; idx++) {
		cin >> s;
		strtoidx.insert(make_pair(s, idx));
		pr[idx].second = s;  // 인덱스에 자신의 이름 저장(.second)
	}

	while (cin >> s) pr[strtoidx[s]].first--;  // 자신을 좋아하는 사람의 수를 계산해준다(음수로 하여 자동으로 내림차순으로 정렬되도록 한다)

	sort(pr, pr + N);

	for (int i = 0; i < N; i++) cout << pr[i].second << ' ' << -pr[i].first << '\n';   // 음수로 계산되었으므로 부호 반대로 출력
}

