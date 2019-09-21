#include <stdio.h>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int cnt_1 = 0, cnt_2 = 0;
    if (a == 1) {
        cnt_1 += 1;
    } else {
        cnt_2 += 1;
    }
    if (b == 1) {
        cnt_1 += 1;
    } else {
        cnt_2 += 1;
    }
    if (c == 1) {
        cnt_1 += 1;
    } else {
        cnt_2 += 1;
    }
    if (cnt_1 > cnt_2) {
        printf("%d", 1);
    } else {
        printf("%d", 2);
    }
    return 0;
}