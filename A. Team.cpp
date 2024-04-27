// Problem: A. Team
// Contest: Codeforces Round 143 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/231/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue Apr 23 19:42:44 2024

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string input;
  getline(cin, input);
  int output = 0;

  for (int i = 0; i < n; i++) {
    getline(cin, input);

    int areSure = std::count_if(input.cbegin(), input.cend(), [](char ch) {
      return ch == '1';
    });

    if (areSure > 1)
      output++;
  }

  cout << output << endl;

	return 0;
}
