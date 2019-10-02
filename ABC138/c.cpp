#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    rep(i, n) {
        scanf("%d", &v[i]);
    }
    if (n == 2) {
        printf("%f", ((float)v[0] + (float)v[1]) / 2.0);
        return 0;
    }
    sort(v.begin(), v.end());
    float equate = 0;
    rep(i, n) {
        if (i == 0) {
            equate = (float)v[i];
        } else {
            equate = (equate + (float)v[i]) / 2.0;
        }
    }
    printf("%f", equate);
    return 0;
}