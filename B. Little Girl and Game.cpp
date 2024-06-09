// Problem: B. Little Girl and Game
// Contest: Codeforces Round 169 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/276/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Jun  8 10:24:12 2024

#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

int main() {
  map<char, int> counts;
  string s;
  cin >> s;

  for (auto c: s) {
    counts[c]++;
  }
  
  int count_odds = 0;
  
  for (auto [ch, count]: counts) {
    if (count % 2 > 0)
      count_odds++;
  }
  
  if (count_odds == 0 || count_odds % 2 > 0) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }

	return 0;
}
