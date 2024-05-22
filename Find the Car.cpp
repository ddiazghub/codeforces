// Problem: Find the Car
// Contest: unknown_contest
// Judge: Codeforces
// URL: https://m2.codeforces.com/contest/1971/problem/E
// Memory Limit: 256
// Time Limit: 3000
// Start: Fri May 10 10:19:07 2024

#include <iostream>
#include <vector>

using namespace std;

long long binarySearch(vector<long long> &arr, long long value) {
  long long start = 0;
  long long end = arr.size();

  while (start < end) {
    long long mid = start + (end - start) / 2;

    if (arr[mid] < value)
      start = mid + 1;
    else if (arr[mid] > value)
      end = mid;
    else
      return mid;
  }

  return start < arr.size() ? start : arr.size() - 1;
}

int main() {
  long long n;
  cin >> n;

  for (long long i = 0; i < n; i++) {
    long long n, k, q;
    vector<long long> a;
    vector<long long> b;
    cin >> n >> k >> q;

    for (long long j = 0; j < k; j++) {
      long long ai;
      cin >> ai;
      a.push_back(ai);
    }

    for (long long j = 0; j < k; j++) {
      long long bi;
      cin >> bi;
      b.push_back(bi);
    }

    for (long long j = 0; j < q; j++) {
      long long qi, output;
      cin >> qi;

      long long pos = binarySearch(a, qi);

      if (a[pos] == qi) {
        output = b[pos];
      } else {
        if (pos > 0) {
          long long prev = a[pos - 1];
          long long prevTime = b[pos - 1];
          output = prevTime + (qi - prev) * (b[pos] - prevTime) / (a[pos] - prev);
        } else {
          output = qi * b[pos] / a[pos];
        }
      }
      cout << output << ' ';
    }

    cout << endl;
  }

  return 0;
}
