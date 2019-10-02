#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("0");
        return 0;
    }
    vector<int> h(n);
    rep(i, n) {
        scanf("%d", &h[i]);
    }
    int max = 0;
    int kari_max = 0;
    rep(i, n - 1) {
        if (h[i + 1] <= h[i]) {
            kari_max++;
        } else {
            if (kari_max > max) {
                max = kari_max;
            }
            kari_max = 0;
        }
    }
    if (kari_max > max) {
        max = kari_max;
    }
    printf("%d", max);
    return 0;
}