#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int l, n;
    scanf("%d%d", &l, &n);
    vector<int> list(n);
    for (int i = 0; i < list.size(); i++) {
        scanf("%d", &list[i]);
    }
    int time = 0;
    for (int j = 0; j < list.size(); j++) {
        time = max(time, max(list[j], l - list[j]));
    }
    printf("%d", time);
    return 0;
}