#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a + b) % 2 == 0) {
        printf("%d", (a + b) / 2);
    } else {
        printf("IMPOSSIBLE");
    }
    return 0;
}