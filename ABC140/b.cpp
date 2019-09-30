#include <bits/stdc++.h>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n), b(n), c(n - 1);
    rep(i, n) {
        scanf("%d", &a[i]);
    }
    rep(i, n) {
        scanf("%d", &b[i]);
    }
    rep(i, n - 1) {
        scanf("%d", &c[i]);
    }
    int result = 0;
    rep(i, n - 1) {
        if (a[i + 1] - a[i] == 1) {
            result += c[a[i] - 1];
        }
    }
    printf("%d", result + accumulate(b.begin(), b.end(), 0));
    return 0;
}