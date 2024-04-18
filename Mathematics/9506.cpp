# include <iostream>
# include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    
    while (true) {
        cin >> t;
        if (t == -1) {
            break;
        }
        else {
            vector<int> v;
            int sum = 0;
            for (int i = 1; i < t; ++i) {
                if (t % i == 0) {
                    v.push_back(i);
                    sum += i;
                }
            }

            if (sum == t) {
                cout << t << " = ";
                cout << *v.begin();
                for (auto it = ++v.begin(); it != v.end(); ++it) {
                    cout << " + " << *it;
                }
                cout << '\n';
                v.clear();
            }

            else {
                cout << t << " is NOT perfect." << '\n';
            }
        }
    }

    return 0;
    }