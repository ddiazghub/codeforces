// Problem: A. Little Nikita
// Contest: Codeforces Round 948 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1977/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun May 26 09:38:33 2024

#include <iostream>

using namespace std;

string solve() {
  int n, m;
  cin >> n >> m;

  n -= m;

  if (n < 0)
    return "No";

  return n % 2 == 0 ? "Yes" : "No";
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    cout << solve() << endl;

	return 0;
}
