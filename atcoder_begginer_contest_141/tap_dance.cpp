#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    char s[100];
    scanf("%s", s);
    bool flag = true;
    for (int i = 0; i < strlen(s); i++) {
        if (i % 2 == 0) {
            if (s[i] != 'R' && s[i] != 'U' && s[i] != 'D') {
                flag = false;
                break;
            }
        } else {
            if (s[i] != 'L' && s[i] != 'U' && s[i] != 'D') {
                flag = false;
                break;
            }
        }
    }
    if (flag) {
        printf("%s", "Yes");
    } else {
        printf("%s", "No");
    }
    return 0;
}