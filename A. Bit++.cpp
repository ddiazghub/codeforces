// Problem: A. Bit++
// Contest: Codeforces Round 173 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/282/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue Apr 23 20:01:39 2024

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string input;
  getline(cin, input);

  int x = 0;

  for (int i = 0; i < n; i++) {
    getline(cin, input);

    if (input[1] == '+') x++;
    else x--;
  }

  cout << x << endl;

	return 0;
}
