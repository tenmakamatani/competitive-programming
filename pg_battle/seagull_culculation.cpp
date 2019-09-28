#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    vector<int> l(3);
    l[0] = a;
    l[1] = b;
    l[2] = c;
    sort(l.begin(), l.end(), greater<int>());
    vector<int> result(3, -1);
    if (l[0] == 0 && m == 0) {
        printf("%d %d %d", n, 0, 0);
        return 0;
    }
    for (int i = m / l[0]; i >= 0; i--) {
        if (i > n) {
            continue;
        }
        int feets = m - l[0] * i;
        int nums = n - i;
        if (nums * l[1] < feets) {
            continue;
        }
        int amari = nums * l[1] - feets;
        if (l[1] == l[2]) {
            if (nums % l[1] == 0 && nums / l[1] == nums) {
                result[0] = i;
                result[1] = num / l[1];
                result[2] = 0;
                break;
            } else {
                continue;
            }
        }
        if (amari % (l[1] - l[2]) == 0) {
            if (amari / (l[1] - l[2]) < n) {
                result[0] = i;
                result[1] = n - i - amari / (l[1] - l[2]);
                result[2] = amari / (l[1] - l[2]);
            }
        }
    }
    vector<int> real_result(3, 0);
    for (int i = 0; i < 3; i++) {
        if (l[i] == a) {
            real_result[0] = result[i];
        } else if (l[i] == b) {
            real_result[1] = result[i];
        } else if (l[i] == c) {
            real_result[2] = result[i];
        }
    }
    printf("%d %d %d", real_result[0], real_result[1], real_result[2]);
    return 0;
}