// Problem: A. Petya and Strings
// Contest: Codeforces Beta Round 85 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/112/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Apr 27 13:31:44 2024

#include <cctype>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main() {
  string a, b;
  int output = 0;

  getline(cin, a);
  getline(cin, b);

  for (int i = 0; i < a.size(); i++) {
    int char_a = tolower(a[i]);
    int char_b = tolower(b[i]);

    if (char_a < char_b) {
      output = -1;
      break;
    } else if (char_a > char_b) {
      output = 1;
      break;
    }
  }

  cout << output << endl;

	return 0;
}
