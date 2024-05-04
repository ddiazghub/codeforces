// Problem: A. Stones on the Table
// Contest: Codeforces Round 163 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/266/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri May  3 22:14:43 2024

#include <iostream>

using namespace std;

int main() {
  char last = '\0';
  int n, i = 0, taken = 0;
  string stones;

  cin >> n;
  cin >> stones;

  while (i < stones.size()) {
    if (stones[i] == last)
      taken++;

    last = stones[i];
    i++;
  }

  cout << taken << endl;

	return 0;
}
