#include <stdio.h>
#include <vector>

using namespace std;

bool binary_search(int x, vector<int> kk) {
    int l = 0, r = kk.size();
    while (r - l >= 1) {
        int i = (l + r) / 2;
        if (kk[i] == x) {
            return true;
        } else if (kk[i] < x) {
            l = i + l;
        } else {
            r = i;
        }
    }
    return false;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k[i]);
    }
    vector<int> kk(n*n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            kk[i * n + j] = k[i] * k[j];
        }
    }
    sort(kk.begin(), kk.end());
    int i = 0, j = 0;
    bool f = false;
    while (!f) {
        if (binary_search(m - k[i] - k[j], kk)) {
            f = true;
        } else {
            if (i == n - 1 && j == n - 1) {
                break;
            } else if (j == n - 1) {
                i++;
                j = 0;
            } else {
                j++;
            }
        }
    }
    if (f) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
