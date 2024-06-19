// Problem: C. Paint the Array
// Contest: Codeforces Round 760 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1618/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue Jun 18 15:53:49 2024

#include <bits/stdc++.h>
#include <numeric>
#include <vector>

using namespace std;

typedef long long i64;
typedef int i32;

i64 solve() {
  int n;
  cin >> n;
  vector<i64> a(n);

  for (auto& ai: a) {
    cin >> ai;
  }

  i64 gcd_even = a[0];
  i64 gcd_odd = a[1];

  for (int i = 3; i < n; i += 2) {
    gcd_odd = gcd(gcd_odd, a[i]);
  }

  for (int i = 2; i < n; i += 2) {
    gcd_even = gcd(gcd_even, a[i]);
  }

  bool even = true;
  bool odd = true;

  for (int i = 0; i < n; i += 2) {
    if (a[i] % gcd_odd == 0) {
      odd = false;
    }
  }

  for (int i = 1; i < n; i += 2) {
    if (a[i] % gcd_even == 0) {
      even = false;
    }
  }

  return even ? gcd_even : odd ? gcd_odd : 0;
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
