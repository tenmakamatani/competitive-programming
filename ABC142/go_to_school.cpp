#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[a[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}