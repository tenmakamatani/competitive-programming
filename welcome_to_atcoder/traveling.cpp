#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

bool search(int t, int x, int y) {
    int x_dist = abs(x);
    int y_dist = abs(y);
    if (x_dist + y_dist > t) {
        return false;
    } else if ((t - x_dist - y_dist) % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> time(n + 1), x(n + 1), y(n + 1);
    time[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        scanf("%d%d%d", &time[i], &x[i], &y[i]);
    }
    bool f = true;
    for (int i = 0; i < n; i++) {
        int time_lag = time[i + 1] - time[i];
        int x_dist = x[i + 1] - x[i];
        int y_dist = y[i + 1] - y[i];
        if (!search(time_lag, x_dist, y_dist)) {
            f = false;
            break;
        }
    }
    if (f) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
