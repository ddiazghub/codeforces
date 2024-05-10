// Problem: A. The number of positions
// Contest: Codeforces Beta Round 92 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/124/A
// Memory Limit: 256
// Time Limit: 500
// Start: Sat May  4 20:25:34 2024

#include <iostream>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int output = min(n - a, b + 1);
	cout << output<< endl;

	return 0;
}
