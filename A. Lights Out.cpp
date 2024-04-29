// Problem: A. Lights Out
// Contest: Codeforces Round 168 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/275/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon Apr 29 11:29:44 2024

#include <array>
#include <iostream>
using namespace std;

const int ROWS = 3;

inline void invert(char& ch) {
  ch = ch == '1' ? '0' : '1';
}

int main() {
  array<string, ROWS> output{"111", "111", "111"};

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < ROWS; j++) {
      int input;
      cin >> input;

      if (input % 2 > 0) {
        invert(output[i][j]);

        if (i > 0)
          invert(output[i - 1][j]);

        if (j > 0)
          invert(output[i][j - 1]);

        if (i < ROWS - 1)
          invert(output[i + 1][j]);

        if (j < ROWS - 1)
          invert(output[i][j + 1]);
      }
    }
  }

  for (auto& row: output)
    cout << row << endl;

  return 0;
}
