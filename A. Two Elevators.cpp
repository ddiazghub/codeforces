// Problem: A. Two Elevators
// Contest: Codeforces Round 820 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1729/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Jun 17 16:56:45 2024

#include <bits/stdc++.h>

using namespace std;

int solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int t1 = a - 1;
  int t2 = abs(c - b) + c - 1;

  if (t1 < t2) {
    return 1;
  } else if (t2 < t1) {
    return 2;
  } else {
    return 3;
  }
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
