#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
    int result = 0;
    for (int i = 0; i < n; i++) {
        if (h[i] >= k) {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}