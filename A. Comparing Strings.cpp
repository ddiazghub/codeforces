// Problem: A. Comparing Strings
// Contest: Codeforces Round 118 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/186/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Jun  8 11:38:10 2024

#include <bits/stdc++.h>

using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  
  if (s1.size() != s2.size()) {
    cout << "NO" << endl;

    return 0;
  }

  int n_diff = 0;
  char first;
  char second;

  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] != s2[i]) {
      if (n_diff == 0) {
        first = s1[i];
        second = s2[i];
      } else if (n_diff == 1) {
        if (!(s1[i] == second && s2[i] == first)) {
          cout << "NO" << endl;
          return 0;
        }
      } else {
        cout << "NO" << endl;
        return 0;
      }

      n_diff++;
    }
  }

  if (n_diff == 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

	return 0;
}
