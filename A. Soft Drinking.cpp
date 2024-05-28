// Problem: A. Soft Drinking
// Contest: Codeforces Round 107 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/151/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon May 27 20:49:16 2024

#include <iostream>

using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int milliliters = k * l;
  int slices = c * d;
  int toasts = min(min(milliliters / (n * nl), slices / n), p / (n * np));
  cout << toasts << endl;

	return 0;
}
