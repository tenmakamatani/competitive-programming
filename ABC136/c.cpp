#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("Yes");
        return 0;
    }
    vector<int> h(n);
    rep(i, n) {
        scanf("%d", &h[i]);
    }
    if (n == 2) {
        if (h[0] - h[1] <= 2) {
            printf("Yes");
        } else {
            printf("No");
        }
        return 0;
    }
    h[0]--;
    bool flg = true;
    for (int i = 1; i < n; i++) {
        if (h[i] > h[i - 1]) {
            h[i]--;
        } else if (h[i] < h[i - 1]) {
            flg = false;
            break;
        }
    }
    if (flg) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}