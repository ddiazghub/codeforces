// Problem: A. Cupboards
// Contest: Codeforces Round 152 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/248/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed May 22 21:24:06 2024

#include <iostream>

using namespace std;

int main() {
  int n, l(0), r(0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    int li, ri;
    cin >> li >> ri;
    l += li;
    r += ri;
  }

  int result = min(n - l, l) + min(n - r, r);

	cout << result << endl;

	return 0;
}
