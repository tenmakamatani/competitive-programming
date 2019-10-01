#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    printf("%d\n", que.front());
    que.pop();
    printf("%d\n", que.front());
    que.pop();
    printf("%d\n", que.front());
    que.pop();
    return 0;
}