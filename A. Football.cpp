// Problem: A. Football
// Contest: Codeforces Beta Round 77 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/96/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 20:35:52 2024

#include <iostream>

using namespace std;

int main() {
  string input;
  int consecutive = 1;
  cin >> input;

  for (int i = 1; i < input.size(); i++) {
    if (input[i - 1] == input[i]) {
      consecutive++;

      if (consecutive == 7) {
        cout << "YES" << endl;
        return 0;
      }
    } else {
      consecutive = 1;
    }
  }

	cout << "NO" << endl;

	return 0;
}
