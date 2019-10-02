#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    rep(i, n) {
        scanf("%d", &a[i]);
    }
    float reverse = 0;
    rep(i, n) {
        float dis = 1 / (float)a[i];
        reverse += dis;
    }
    printf("%f", 1 / reverse);
    return 0;
}