// Problem: A. Boy or Girl
// Contest: Codeforces Round 146 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/236/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon May 27 19:43:07 2024

#include <iostream>
#include <set>

using namespace std;

int main() {
  string s;
  cin >> s;
  set<int> chars(s.cbegin(), s.cend());

  if (chars.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }

	return 0;
}
