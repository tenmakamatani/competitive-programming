#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<string> big_words(n), small_words(n);
    for (int i = 0; i < n; i++) {
        cin >> big_words[i];
    }
    for (int i = 0; i < n; i++) {
        small_words[i].resize(big_words[i].size());
        transform(big_words[i].begin(), big_words[i].end(), small_words[i].begin(), ::tolower);
        cout << small_words[i] << endl;
    }
}