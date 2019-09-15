#include <stdio.h>

using namespace std;

int main() {
    int n, k, q;
    scanf("%d%d%d", &n, &k, &q);
    int less_points[n];
    for (int k = 0; k < n; k++) {
        less_points[k] = q;
    }
    int answerer;
    for (int a = 0; a < q; a++) {
        scanf("%d", &answerer);
        less_points[answerer - 1] = less_points[answerer - 1] - 1;
    }
    int point;
    for (int b = 0; b < n; b++) {
        point = k - less_points[b];
        if (point > 0) {
            printf("%s", "Yes\n");
        } else {
            printf("%s", "No\n");
        }
    }
    return 0;
}