#include <stdio.h>

using namespace std;

int main() {
    int x, t;
    scanf("%d%d", &x, &t);
    if (x - t <= 0) {
        printf("%d", 0);
    } else {
        printf("%d", x - t);
    }
    return 0;
}