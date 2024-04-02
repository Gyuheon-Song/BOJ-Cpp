#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int N;
map<string, int> strtoidx;  // �̸��� ������ �����ϴ� map
pair<int, string> pr[100];  // �ڽ��� �ε����� �ڽ��� �����ϴ� ����� ���� �ڽ��� �̸��� pair�� �����ϴ� �迭

string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int idx = 0; idx < N; idx++) {
		cin >> s;
		strtoidx.insert(make_pair(s, idx));
		pr[idx].second = s;  // �ε����� �ڽ��� �̸� ����(.second)
	}

	while (cin >> s) pr[strtoidx[s]].first--;  // �ڽ��� �����ϴ� ����� ���� ������ش�(������ �Ͽ� �ڵ����� ������������ ���ĵǵ��� �Ѵ�)

	sort(pr, pr + N);

	for (int i = 0; i < N; i++) cout << pr[i].second << ' ' << -pr[i].first << '\n';   // ������ ���Ǿ����Ƿ� ��ȣ �ݴ�� ���
}

