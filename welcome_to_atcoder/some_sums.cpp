#include <stdio.h>

using namespace std;

int sums(int n) {
    int devider = 10000;
    int sum = 0;
    while (true) {
        if (n < 10) {
            sum += n;
            break;
        }
        sum += (n - n % devider) / devider;
        n = n % devider;
        devider /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (a <= sums(i) && sums(i) <= b) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}