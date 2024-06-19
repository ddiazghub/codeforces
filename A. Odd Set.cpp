// Problem: A. Odd Set
// Contest: Codeforces Round 729 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1542/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Jun 17 16:38:06 2024

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, n_odds(0);
  cin >> n;

  for (int i = 0; i < 2 * n; i++) {
    int ai;
    cin >> ai;

    if (ai % 2 > 0)
      n_odds++;
  }

  int n_evens = 2 * n - n_odds;

	cout << (n_evens >= n && n_odds >= n ? "Yes" : "No") << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    solve();

	return 0;
}
