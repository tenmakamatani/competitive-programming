#include <stdio.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
        if (l[i] % 2 != 0) {
            printf("%d", 0);
            return 0;
        } else {
            l[i] = l[i] / 2;
        }
    }
    bool flag = true;
    int cnt = 0;
    while (flag) {
        cnt++;
        for (int j = 0; j < n; j++) {
            if (l[j] % 2 != 0) {
                flag = false;
                break;
            } else {
                l[j] = l[j] / 2;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}