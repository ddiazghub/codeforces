// Problem: A. Dubstep
// Contest: Codeforces Round 130 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/208/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 12:23:00 2024

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int old() {
  string input, word;
  vector<string> output;

  cin >> input;

  for (auto ch : input) {
    word.push_back(ch);

    if (word.size() >= 3 && word.substr(word.size() - 3, 3) == "WUB") {
      if (word.size() > 3) {
        output.push_back(word.substr(0, word.size() - 3));
      }

      word.clear();
    }
  }

  if (word.size() > 0)
    output.push_back(word);

  for (auto &w : output) {
    cout << w << ' ';
  }

  cout << endl;

  return 0;
}

// D:
enum class Wub { W, WU, WUB };

int main() {
  // :(
  Wub wub(Wub::WUB);
  string input, word;
  vector<string> output;

  cin >> input;

  for (auto ch : input) {
    word.push_back(ch);

    switch (wub) {
      case Wub::WUB:
        if (ch == 'W')
          wub = Wub::W;
        else
          wub = Wub::WUB;

        break;
      case Wub::W:
        if (ch == 'U')
          wub = Wub::WU;
        else if (ch == 'W')
          wub = Wub::W;
        else
          wub = Wub::WUB;

        break;
      case Wub::WU:
        if (ch == 'B') {
          wub = Wub::WUB;

          if (word.size() > 3) {
            output.push_back(word.substr(0, word.size() - 3));
          }

          word.clear();
        } else if (ch == 'W') {
          wub = Wub::W;
        } else {
          wub = Wub::WUB;
        }

        break;
      default:
        wub = Wub::WUB;

        break;
    }
  }

  if (word.size() > 0)
    output.push_back(word);

  for (string &w : output) {
    cout << w << ' ';
  }

  cout << endl;

  return 0;
}
