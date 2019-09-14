#include <stdio.h>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    sort(nums, nums + n, greater<int>());
    int count_alice = 0, count_bob = 0;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            count_alice += nums[j];
        } else {
            count_bob += nums[j];
        }
    }
    printf("%d", count_alice - count_bob);
    return 0;
}