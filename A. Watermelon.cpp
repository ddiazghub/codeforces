// Problem: A. Watermelon
// Contest: Codeforces Beta Round 4 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/4/A
// Memory Limit: 64
// Time Limit: 1000
// Start: Sat Apr 20 20:19:35 2024

#include <iostream>
#include <string>
using namespace std;

int main() {
  int weight;
  cin >> weight;
  string answer = weight % 2 == 0 && weight != 2 ? "YES" : "NO";
  cout << answer << endl;

	return 0;
}
