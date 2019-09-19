#include <iostream>
#include <string>

using namespace std;

bool search(string s, int i = 0, bool isFinished = false) {
    if (isFinished) {
        return true;
    }
    if (s.substr(i, 5) == "dream") {
        if (i + 5 == s.size()) {
            return true;
        } else {
            isFinished = search(s, i + 5, false);
            if (isFinished) {
                return true;
            }
        }
    }
    if (s.substr(i, 7) == "dreamer") {
        if (i + 7 == s.size()) {
            return true;
        } else {
            isFinished = search(s, i + 7, false);
            if (isFinished) {
                return true;
            }
        }
    }
    if (s.substr(i, 5) == "erase") {
        if (i + 5 == s.size()) {
            return true;
        } else {
            isFinished = search(s, i + 5, false);
            if (isFinished) {
                return true;
            }
        }
    }
    if (s.substr(i, 6) == "eraser") {
        if (i + 6 == s.size()) {
            return true;
        } else {
            isFinished = search(s, i + 6, false);
            if (isFinished) {
                return true;
            }
        }
    }
    return isFinished;
}

int main() {
    string s;
    cin >> s;
    bool result = search(s, 0, false);
    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}