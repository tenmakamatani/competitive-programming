#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}

vector<pair<ll, int>> factorize(ll g) {
    vector<pair<ll, int>> res;
    for (ll i = 2; i * i <= g; i++) {
        if (g % i != 0) continue;
        res.emplace_back(i, 0);
        while(g % i == 0) {
            g /= i;
            res.back().second++;
        }
    }
    if (g != 1) res.emplace_back(g, 1);
    return res;
}

int main() {
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    auto f = factorize(g);
    int ans = f.size() + 1;
    cout << ans << endl;
    return 0;
}