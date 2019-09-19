#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> cards(n), after_cards(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
        after_cards[n - 1 - i] = cards[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", after_cards[i]);
    }
    return 0;
}