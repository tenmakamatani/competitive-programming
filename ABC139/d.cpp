#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    scanf("%d", &n);
    if (n == 1) {
        printf("0");
        return 0;
    }
    printf("%lld", n * (n - 1) / 2);
    return 0;
}