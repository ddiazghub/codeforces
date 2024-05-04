// Problem: A. Word
// Contest: Codeforces Beta Round 55 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/59/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri May  3 21:48:20 2024

#include <iostream>
using namespace std;

int main() {
  int lowercase = 0;
  string word;
  cin >> word;

  for (auto ch: word) {
    if (ch >= 'a' && ch <= 'z')
      lowercase++;
  }

  int half = word.size() / 2;

  if (lowercase > half || (word.size() % 2 == 0 && lowercase == half)) {
    for (auto& ch: word) {
      if (ch < 'a')
        ch = 'a' + (ch - 'A');
    }
  } else {
    for (auto& ch: word) {
      if (ch > 'Z')
        ch = 'A' + (ch - 'a');
    }
  }

  cout << word << endl;

	return 0;
}
