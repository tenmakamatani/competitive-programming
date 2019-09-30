#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> b(n - 1);
    rep(i, n - 1) {
        scanf("%d", &b[i]);
    }
    vector<int> a(n);
    if (n == 2) {
        printf("%d", b[0] * 2);
        return 0;
    }
    rep(i, n) {
        if (i == 0) {
            a[i] = b[i];
        } else if (i == n - 1) {
            a[i] = b[i - 1];
        } else {
            a[i] = min(b[i - 1], b[i]);
        }
    }
    printf("%d", accumulate(a.begin(), a.end(), 0));
    return 0;
}