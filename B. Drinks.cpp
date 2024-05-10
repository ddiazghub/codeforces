// Problem: B. Drinks
// Contest: Codeforces Round 126 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/200/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 19:16:09 2024

#include <iostream>

using namespace std;

int main() {
  int n;
  double sum = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int volume;
    cin >> volume;
    sum += volume;
  }

  cout << sum / n << endl;

	return 0;
}
