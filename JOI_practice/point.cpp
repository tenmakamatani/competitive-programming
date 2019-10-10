#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    vector<int> a(4), b(4);
    rep(i, 4) {
        scanf("%d", &a[i]);
    }
    rep(i, 4) {
        scanf("%d", &b[i]);
    }
    printf("%d", max(accumulate(a.begin(), a.end(), 0), accumulate(b.begin(), b.end(), 0)));
    return 0;
}