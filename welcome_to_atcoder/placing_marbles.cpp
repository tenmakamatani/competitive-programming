#include <stdio.h>

using namespace std;

int main() {
    char str[3];
    scanf("%s", str);
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        // ダブルクォーテーションの場合は文字列、シングルの場合は文字
        if (str[i] == '1') {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}