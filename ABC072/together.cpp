#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> list(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    if (n == 1) {
        printf("%d", 1);
        return 0;
    }
    if (n == 2) {
        if (abs(list[0] - list[1]) <= 1) {
            printf("%d", 2);
        } else {
            printf("%d", 1);
        }
        return 0;
    }
    vector<int> num_list(n, 0);
    for (int j = 0; j < n; j++) {
        num_list[list[j]] = num_list[list[j]] + 1;
    }
    int max = 1;
    for (int k = 0; k <= n - 3; k++) {
        if (max < num_list[k] + num_list[k + 1] + num_list[k + 2]) {
            max = num_list[k] + num_list[k + 1] + num_list[k + 2];
        }
    }
    printf("%d", max);
    return 0;
}