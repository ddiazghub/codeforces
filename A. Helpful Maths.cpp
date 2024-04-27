// Problem: A. Helpful Maths
// Contest: Codeforces Round 197 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/339/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Apr 27 10:38:27 2024

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string input, token;
  vector<int> numbers;

  getline(cin, input);
  stringstream stream(input);

  while (getline(stream, token, '+')) {
    numbers.push_back(stoi(token));
  }

  sort(numbers.begin(), numbers.end());
  string output{to_string(numbers[0])};

  for (int i = 1; i < numbers.size(); i++) {
    output.push_back('+');
    output.append(to_string(numbers[i]));
  }

  cout << output << endl;

	return 0;
}
