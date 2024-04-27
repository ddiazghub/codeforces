// Problem: A. Way Too Long Words
// Contest: Codeforces Beta Round 65 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/71/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue Apr 23 19:26:28 2024

#include <iostream>
#include <string>

using namespace std;

int main() {
  int lines;
  cin >> lines;

  for (int i = 0; i < lines; i++) {
    string line;
    cin >> line;
    
    if (line.size() > 10) {
      cout << line[0] << line.size() - 2 << line.back() << endl;
    } else {
      cout << line << endl;
    }
  }

	return 0;
}
