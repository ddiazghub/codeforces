// Problem: A. Ultra-Fast Mathematician
// Contest: Codeforces Beta Round 57 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/61/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 17:29:30 2024

#include <iostream>

using namespace std;

int main() {
  string a, b, output;
  cin >> a >> b;

  for (int i = 0; i < a.size(); i++)
    output.push_back(a[i] == b[i] ? '0' : '1');

	cout << output << endl;
	return 0;
}
