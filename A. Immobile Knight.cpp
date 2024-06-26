// Problem: A. Immobile Knight
// Contest: Educational Codeforces Round 136 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1739/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed Jun 19 16:41:48 2024

#include <bits/stdc++.h>
#include <utility>

using namespace std;

pair<int, int> solve() {
  int n, m;
  cin >> n >> m;

  if (n == 1 || m == 1 || (n == 2 && m == 2)) {
    return {1, 1};
  } else if ((n == 3 && m == 3) || (n == 3 && m == 2) || (m == 3 && n == 2)) {
    return {2, 2};
  }

  return {1, 1};
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    auto [x, y] = solve();
    cout << x << ' ' << y << endl;
  }

	return 0;
}
