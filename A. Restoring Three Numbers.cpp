// Problem: A. Restoring Three Numbers
// Contest: Codeforces Round 552 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1154/A?locale=en
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Jun 17 15:34:19 2024

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x[4];
  cin >> x[0] >> x[1] >> x[2] >> x[3];
  sort(x, x + 4);

  for (int i = 0; i < 3; i++)
    cout << x[3] - x[i] << ' ';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();
  solve();

  return 0;
}
