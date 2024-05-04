// Problem: A. Word Capitalization
// Contest: Codeforces Round 172 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/281/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri May  3 22:02:24 2024

#include <iostream>

using namespace std;

int main() {
  string input;
  cin >> input;

  input[0] = input[0] > 'Z' ? ('A' + input[0] - 'a') : input[0];

  cout << input << endl;

	return 0;
}
