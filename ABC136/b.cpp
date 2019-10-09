#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int digitCheck(int n) {
    bool flg = true;
    int digit = 1;
    while (flg) {
        n = n / 10;
        if (n == 0) {
            flg = false;
        } else {
            digit++;
        }
    }
    return digit;
}

int main() {
    int n;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (digitCheck(i) % 2 == 1) {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}