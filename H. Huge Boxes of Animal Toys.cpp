// Problem: H. Huge Boxes of Animal Toys
// Contest: 2020 ICPC, COMPFEST 12, Indonesia Multi-Provincial Contest (Unrated,
// Online Mirror, ICPC Rules, Teams Preferred) Judge: Codeforces URL:
// https://codeforces.com/contest/1425/problem/H Memory Limit: 256 Time Limit:
// 2000 Start: Thu Jun 20 18:27:20 2024

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a + b % 2 > 0) {
    cout << (a > 0 || d > 0 ? "Ya " : "Tidak ");
    cout << (b > 0 || c > 0 ? "Ya " : "Tidak ");
    cout << "Tidak Tidak\n";
  } else {
    cout << "Tidak Tidak ";
    cout << (c > 0 || b > 0 ? "Ya " : "Tidak ");
    cout << (d > 0 || a > 0 ? "Ya\n" : "Tidak\n");
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
