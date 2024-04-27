// Problem: A. Next Round
// Contest: VK Cup 2012 Qualification Round 1
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256
// Time Limit: 3000
// Start: Wed Apr 24 08:33:23 2024

#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

int main() {
  vector<int> scores;
  int n, k, score;
  cin >> n;
  cin >> k;

  while (cin >> score) {
    scores.push_back(score);
  }

  sort(scores.begin(), scores.end(), greater<int>());
  int minScore = scores[k - 1];

  if (minScore > 0) {
    auto iterator = find_if(scores.cbegin() + k - 1, scores.cend(),
                            [minScore](int score) { return score < minScore; });

    cout << iterator - scores.cbegin() << endl;
  } else {
    auto iterator = find_if(scores.crbegin() + scores.size() - k, scores.crend(),
                            [](int score) { return score > 0; });

    cout << scores.size() - (iterator - scores.crbegin()) << endl;
  }

  return 0;
}
