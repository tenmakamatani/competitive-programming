#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int nokori = a - b;
    if (nokori >= c) {
        printf("%d", 0);
    } else {
        printf("%d", c - nokori);
    }
    return 0;
}