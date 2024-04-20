# include <iostream>
# include <vector>
# include <queue>

using std::cin;
using std::cout;
using std::vector;
using std::queue;

int main() {
    int n, tmp;
    bool flag = true;
    cin >> n;
    queue<int> q;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        q.push(tmp);
    }
    int size = q.size();

    int pass = 1;
    while (true) {
        if (q.empty()) {
            if (v.empty()) {
                cout << "Nice";
                break;
            }
            else {
                if (v.back() == pass) {
                    v.pop_back();
                    ++pass;
                }
                else {
                    cout << "Sad";
                    break;
                }
            }
        }
        else {
            if (v.empty()) {
                if (q.front() == pass) {
                    q.pop();
                    ++pass;
                }
                else {
                    v.push_back(q.front());
                    q.pop();
                }
            }
            else {
                if (q.front() == pass) {
                    q.pop();
                    ++pass;
                }
                else if (v.back() == pass) {
                    v.pop_back();
                    ++pass;
                }
                else {
                    v.push_back(q.front());
                    q.pop();
                }
            }
        }
    }

    return 0;
}