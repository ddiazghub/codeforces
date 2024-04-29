// Problem: B. Borze
// Contest: Codeforces Beta Round 32 (Div. 2, Codeforces format)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/32/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon Apr 29 10:23:10 2024

#include <iostream>
using namespace std;

int main() {
  string code;
  string number;

  cin >> code;

  for (int i = 0; i < code.size(); i++) {
    if (code[i] == '-') {
      if (code[i + 1] == '-') {
        number.push_back('2');
      } else {
        number.push_back('1');
      }

      i++;
    } else {
      number.push_back('0');
    }
  }

  cout << number << endl;

	return 0;
}
