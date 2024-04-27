// Problem: A. Beautiful Matrix
// Contest: Codeforces Round 161 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/263/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Apr 27 11:05:02 2024

#include <array>
#include <cstdlib>
#include <iostream>

using namespace std;

const int ROWS = 5;

int main() {
  array<array<int, ROWS>, ROWS> rows;

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < ROWS; j++) {
      int input;
      cin >> input;

      if (input == 1) {
        int answer = abs(i - 2) + abs(j - 2);
        cout << answer << endl;

        return 0;
      }
    }
  }

	return 0;
}
