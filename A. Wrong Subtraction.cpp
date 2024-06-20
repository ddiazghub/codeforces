// Problem: A. Wrong Subtraction
// Contest: Codeforces Round 479 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/977/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Jun 19 14:59:18 2024

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < k; i++) {
    if (n % 10 == 0) {
      n /= 10;
    } else {
      n--;
    }
  }

	cout << n << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  solve();

	return 0;
}
