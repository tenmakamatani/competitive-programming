#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b == 1) {
        printf("0");
        return 0;
    }
    if (a > b) {
        printf("1");
        return 0;
    }
    int c = b - a;
    int d;
    if (c % (a - 1) == 0) {
        d = c / (a - 1);
    } else {
        d = c / (a - 1) + 1;
    }
    printf("%d", d + 1);
    return 0;
}