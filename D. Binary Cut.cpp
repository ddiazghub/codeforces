// Problem: D. Binary Cut
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue May 21 21:08:43 2024

#include <array>
#include <iostream>

using namespace std;

array<int, 2> longestIncreasingSubstr(string s) {
  array<int, 2> lis{0, 0};
  bool increasing = false;
  int start = 0;

  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] <= s[i]) {
      if (s[i - 1] == '0' && s[i] == '1') {
        increasing = true;
      }
    } else {
      int count = i - start;

      if (increasing && count > lis[1]) {
        lis = {start, count};
      }

      increasing = false;
      start = i;
    }
  }

  int count = s.size() - start;

  if (increasing && count > lis[1]) {
    lis = {start, count};
  }

  return lis;
}

int binaryCut(string s, array<int, 2> lis) {
  int pieces = 1;

  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] != s[i] && !(i > lis[0] && i < lis[0] + lis[1])) {
      pieces++;
    }
  }

  return pieces;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    auto lis = longestIncreasingSubstr(s);
    cout << binaryCut(s, lis) << endl;
  }

  return 0;
}
