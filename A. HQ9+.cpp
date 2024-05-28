// Problem: A. HQ9+
// Contest: Codeforces Beta Round 96 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/133/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon May 27 21:09:11 2024

#include <iostream>

using namespace std;

int main() {
  string input;
  cin >> input;

  for (auto ch: input) {
    if (ch == 'H' || ch == 'Q' || ch == '9') {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;

	return 0;
}
