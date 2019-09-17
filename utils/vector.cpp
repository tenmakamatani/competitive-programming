// よく使う処理系をまとめる
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>


// 要素数が4のint型の配列を宣言
vector<int> nums(4);


// 要素数が4のint型の配列を宣言し、全てを0で初期化
vector<int> nums_0(4, 0);


// 配列のサイズ取得
nums.size();


// 配列を昇順にソート
sort(nums.begin(), nums.end());


// 配列を降順にソート
sort(nums.begin(), nums.end(), greater<int>());