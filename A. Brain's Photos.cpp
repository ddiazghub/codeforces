// Problem: A. Brain's Photos
// Contest: Codeforces Round 368 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/707/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed Jun 19 14:26:12 2024

#include <bits/stdc++.h>

using namespace std;

string solve() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n * m; i++) {
    char pixel;
    cin >> pixel;

    if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
      return "#Color";
    }
  }

  return "#Black&White";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  cout << solve() << endl;

  return 0;
}
