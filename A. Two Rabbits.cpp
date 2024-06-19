// Problem: A. Two Rabbits
// Contest: Codeforces Round 620 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1304/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Jun 17 17:58:00 2024

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x, y, a, b;
  cin >> x >> y >> a >> b;

  // Rabbit 1: f1(t) = x + a * t
  // Rabbit 2: f2(t) = y - b * t
  // x + a * t = y - b * t
  // t = (y - x) / (a + b)

  double t = double(y - x) / (a + b);

	cout << (t == int(t) ? int(t) : -1) << endl;
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
