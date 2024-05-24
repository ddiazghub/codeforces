// Problem: A. Tram
// Contest: Codeforces Beta Round 87 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/116/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed May 22 21:38:31 2024

#include <iostream>

using namespace std;

int main() {
  int n, maxPassengers = 0, currentPassengers = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    currentPassengers = currentPassengers - a + b;
    maxPassengers = max(currentPassengers, maxPassengers);
  }

  cout << maxPassengers << endl;

	return 0;
}
