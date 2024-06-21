// Problem: A. I Wanna Be the Guy
// Contest: Codeforces Round 268 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/469/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu Jun 20 14:26:52 2024

#include <bits/stdc++.h>
#include <set>

using namespace std;

string solve() {
  set<int> completed;
  int n, p, q;
  cin >> n;
  cin >> p;

  for (int i = 0; i < p; i++) {
    int pi;
    cin >> pi;
    completed.insert(pi);
  }

  cin >> q;

  for (int i = 0; i < q; i++) {
    int qi;
    cin >> qi;
    completed.insert(qi);
  }

	return completed.size() == n ? "I become the guy." : "Oh, my keyboard!";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();
  cout << solve() << endl;

	return 0;
}
