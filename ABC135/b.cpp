#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> p(n);
    rep(i, n) {
        scanf("%d", &p[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) {
            cnt++;
            if (cnt > 2) {
                break;
            }
        }
    }
    if (cnt <= 2) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}