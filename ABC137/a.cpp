#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", max(a * b, max(a + b, a - b)));
    return 0;
}