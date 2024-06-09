// Problem: A. Kitahara Haruki's Gift
// Contest: Codeforces Round 248 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/433/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat Jun  8 11:00:07 2024

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << "NO" << endl;
    return 0;
  }

  int count100(0);

  for (int i = 0; i < n; i++) {
    int w;
    cin >> w;

    if (w == 100)
      count100++;
  }

  int count200 = n - count100;

  if (count100 % 2 > 0) {
    cout << "NO" << endl;
  } else if (count200 % 2 == 0) {
    cout << "YES" << endl;
  } else if (count100 > 0 && count100 % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
