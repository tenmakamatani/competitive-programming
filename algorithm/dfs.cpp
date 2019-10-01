#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

bool dfs(int i, int sum, int n, int k, vector<int> a) {
    if (i == n) return sum == k;
    if (dfs(i + 1, sum, n, k, a)) return true;
    if (dfs(i + 1, sum + a[i], n, k, a)) return true;
    return false;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> a(n);
    rep(i, n) {
        scanf("%d", &a[i]);
    }
    if (dfs(0, 0, n, k, a)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}