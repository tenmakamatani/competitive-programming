#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int n, m;
vector<string> s(n);

void dfs(int x, int y) {
    s[x][y] = '.';
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if (0 <= nx && nx < n && 0 <= ny && ny <= m && s[nx][ny] == 'W') dfs(nx, ny);
        }
    }
    return;
}

int main() {
    cin >> n >> m;
    rep(i, n) {
        string x;
        cin >> x;
        s.push_back(x);
    }
    int res = 0;
    rep(i, n) {
        rep(j, m) {
            if (s[i][j] == 'W') {
                dfs(i, j);
                res++;
            }
        }
    }
    cout << res << endl;
}