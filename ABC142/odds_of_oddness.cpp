#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("0.5000000000");
    } else {
        float result = ((float)n + 1) / 2 / (float)n;
        printf("%f", result);
    }
    return 0;
}