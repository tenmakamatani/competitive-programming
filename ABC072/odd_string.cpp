#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {
    string s, result;
    cin >> s;
    for (int i = 0; i < s.length(); i = i + 2) {
        result = result + s[i];
    }
    cout << result << endl;
}