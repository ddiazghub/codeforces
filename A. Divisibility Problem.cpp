// Problem: A. Divisibility Problem
// Contest: Codeforces Round 629 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1328/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Jun 17 14:21:05 2024

#include <bits/stdc++.h>

using namespace std;

int solve() {
  int a, b;
  cin >> a >> b;

  return a % b == 0 ? 0 : b - (a % b);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    cout << solve() << endl;

	return 0;
}
