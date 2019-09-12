#include <stdio.h>

using namespace std;

int main() {
    int l[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", & l[i]);
    }
    for (int j = 0; j < 5; j++) {
        printf("%d", l[j]);
    }
}