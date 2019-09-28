#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
    }
    int time = 0;
    for (int i = 0; i < n; i++) {
        if (l[i] > k) {
            time += l[i] - k;
        }
    }
    printf("%d", time);
    return 0;
}