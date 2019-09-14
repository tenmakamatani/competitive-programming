#include <stdio.h>

using namespace std;

int returnJMax(int n, int num, int i) {
    if (n - i < num) {
        return n - 1;
    } else {
        return num;
    }
}

int returnKMax(int n, int num, int i, int j) {
    if (n - i - j < num) {
        return n - i - j;
    } else {
        return num;
    }
}

int main() {
    int n, y;
    scanf("%d %d", &n, &y);
    if (1000 * n > y || 10000 * n < y) {
        printf("-1 -1 -1");
        return 0;
    }
    int result[] = {-1, -1, -1};
    bool isFinished = false;
    int i_max = 0, j_max = 0, k_max = 0;
    if (n > (y - y % 10000) / 10000) { 
        i_max = (y - y % 10000) / 10000;
    } else {
        i_max = n;
    }
    for (int i = i_max; i >= 0; i--) {
        if (isFinished) { break; }
        j_max = returnJMax(n, ((y - 10000 * i) - (y - 10000 * i) % 5000) / 5000, i);
        for (int j = j_max; j >= 0; j--) {
            if (isFinished) { break; }
            k_max = returnKMax(n, ((y - 10000 * i - 5000 * j) - (y - 10000 * i - 5000 * j) % 1000) / 1000, i, j);
            for (int k = k_max; k >= 0; k--) {
                if (10000 * i + 5000 * j + 1000 * k == y && i + j + k == n) {
                    result[0] = i;
                    result[1] = j;
                    result[2] = k;
                    isFinished = true;
                    break;
                }
            }
        }
    }
    printf("%d %d %d", result[0], result[1], result[2]);
    return 0;
}