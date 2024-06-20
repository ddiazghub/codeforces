// Problem: A. King Moves
// Contest: Educational Codeforces Round 16
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/710/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Jun 19 19:55:47 2024

#include <bits/stdc++.h>

using namespace std;

int solve() {
  string cell;
  cin >> cell;
  set<string> corners = {"a1", "a8", "h1", "h8"};

  if (corners.find(cell) != corners.end()) {
    return 3;
  } else if (cell[0] == 'a' || cell[1] == '1' || cell[0] == 'h' || cell[1] == '8') {
    return 5;
  }

  return 8;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();
  cout << solve() << endl;

	return 0;
}
