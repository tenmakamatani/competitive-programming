#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    vector<int> c(n + m);
    int a_cnt = 0, b_cnt = 0;
    for (int i = 0; i < n + m; i++) {
        if (a_cnt == n) {
            c[i] = b[b_cnt];
            b_cnt++;
        } else if (b_cnt == m) {
            c[i] = a[a_cnt];
            a_cnt++;
        } else {
            if (a[a_cnt] <= b[b_cnt]) {
                c[i] = a[a_cnt];
                a_cnt++;
            } else {
                c[i] = b[b_cnt];
                b_cnt++;
            }
        }
    }
    for (int i = 0; i < n + m; i++) {
        printf("%d\n", c[i]);
    }
    return 0;
}