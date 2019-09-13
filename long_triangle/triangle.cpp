#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int cnt = 0; cnt < n; cnt++) {
        scanf("%d", &a[cnt]);
    }
    int len, ma, pre_ma;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                len = a[i] + a[j] + a[k];
                ma = max(a[i], max(a[j], a[k]));
                if ((len - ma) > ma && ans < len) {
                    ans = len;
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}