# include <iostream>

using std::cin;
using std::cout;

int min(int& a, int& b)
{
    return a >= b ? b : a;
}

int max(int& a, int& b)
{
    return a >= b ? a : b;
}

int main() {
    int n, tmp;
    int mini = 1000000, maxi = 0;
    cin >> n;
    
    if (n == 1) {
        cin >> tmp;
        cout << tmp * tmp;
    }
    else {
        for(int i = 0; i < n; ++i){
            cin >> tmp;
            mini = min(tmp, mini);
            maxi = max(tmp, maxi);
        }
        cout << mini * maxi;
    }

    return 0;
}