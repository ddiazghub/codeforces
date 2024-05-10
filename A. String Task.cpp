// Problem: A. String Task
// Contest: Codeforces Beta Round 89 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/118/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 20:45:34 2024

#include <cctype>
#include <iostream>

using namespace std;

inline bool isVowel(char ch) {
  return ch == 'a'
    || ch == 'e'
    || ch == 'i'
    || ch == 'o'
    || ch == 'u'
    || ch == 'y'
    || ch == 'A'
    || ch == 'E'
    || ch == 'I'
    || ch == 'O'
    || ch == 'U'
    || ch == 'Y';
}

int main() {
  string input, output;
  cin >> input;

  for (auto ch : input) {
    if (!isVowel(ch)) {
      output.push_back('.');
      output.push_back(tolower(ch));
    }
  }

	cout << output << endl;

	return 0;
}
