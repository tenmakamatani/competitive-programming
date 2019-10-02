#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    string s, t;
    cin >> s >> t;
    int res = 0;
    rep(i, 3) {
        if (s[i] == t[i]) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}