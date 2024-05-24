// Problem: A. Insomnia cure
// Contest: Codeforces Round 105 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/148/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed May 22 20:44:56 2024

#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <set>

using namespace std;

int main() {
  int d;
  array<int, 4> arr;
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> d;
  sort(arr.begin(), arr.end(), greater<int>());

  if (arr[3] == 1) {
    cout << d << endl;
    return 0;
  }

  set<int> skips, damaged;
  skips.insert(arr[0]);

  for (int i = 0; i < arr.size() - 1; i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[i] % arr[j] == 0) {
        skips.erase(arr[i]);
      }

      skips.insert(arr[j]);
    }
  }

  for (int val : skips) {
    for (int i = 1; i * val <= d; i++) {
      damaged.insert(i * val);
    }
  }

  cout << damaged.size() << endl;

  return 0;
}
