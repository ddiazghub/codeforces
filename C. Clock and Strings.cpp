// Problem: C. Clock and Strings
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri May 10 09:55:13 2024

#include <iostream>

using namespace std;

int getY(int n) {
  if (n < 6)
    return n;
  else
    return 12 - n;
}

int getX(int n) {
  switch (n) {
    case 9:
      return 0;
    case 8:
    case 10:
      return 1;
    case 7:
    case 11:
      return 2;
    case 6:
    case 12:
      return 3;
    case 5:
    case 1:
      return 4;
    case 4:
    case 2:
      return 5;
    case 3:
      return 6;
  }

  return 0;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    bool intersepts;
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x1 = getX(a);
    int y1 = getY(a);
    int x2 = getX(b);
    int y2 = getY(b);

    int x3 = getX(c);
    int y3 = getY(c);
    int x4 = getX(d);
    int y4 = getY(d);
    
    if (x1 < x2) {
      if (y1 < y2) {
        if (x3 < x4) {
          if (y3 < y4) {
            intersepts = x1
          } else {

          }
        } else {

        }
      } else {

      }
    } else {
      if (y1 < y2) {

      } else {

      }

    }
  }

	cout << "This is a template file. Input value is: " << n << endl;
	cerr << "Problem name is C. Clock and Strings" << endl;

	return 0;
}
