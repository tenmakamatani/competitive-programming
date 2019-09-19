#include <string>

using namespace std;

// 大文字を小文字に変換する
#include <cstdlib>
#include <algorithm>
string s;
cin >> s;
transform(s.begin(), s.end(), s.begin(), ::tolower) // 大文字にする場合は `toupper`

// 大文字を小文字に変換し、違う変数に代入
#include <cstdlib>
#include <algorithm>
string s, after_s;
cin >> s;
after_s.resize(s.size());
transform(s.begin(), s.end(), after_s.begin(), ::tolower);