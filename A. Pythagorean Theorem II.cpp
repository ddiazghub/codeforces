// Problem: A. Pythagorean Theorem II
// Contest: Codeforces Round 183 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/304/A
// Memory Limit: 256
// Time Limit: 3000
// Start: Sat Jun  8 11:59:36 2024

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  int ans(0);

  for (int a = 1; a <= n; a++) {
    for (int b = a; b <= n; b++) {
      int c2 = a * a + b * b;
      int c = int(sqrt(c2));
      
      if (c <= n && c * c == c2) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
