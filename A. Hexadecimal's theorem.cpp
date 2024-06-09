// Problem: A. Hexadecimal's theorem
// Contest: Codeforces Round 125 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/199/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun Jun  9 17:18:50 2024

#include <bits/stdc++.h>
#include <string>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i64 I64_MAX = numeric_limits<i64>().max();

const string YES = "YES";
const string NO = "NO";

template <typename T> inline void print_array(T arr, size_t n, string end = "", string separator = " ") {
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << separator;
  }

  cout << arr[n - 1] << end << endl;
}

template <typename T> inline void print(vector<T> &arr) { print_array(arr, arr.size()); }
template <typename T, size_t S> inline void print(array<T, S> &arr) { print_array(arr, arr.size()); }
template <typename T> inline void print(T arr[], size_t n) { print_array(arr, n); }

template <typename T> inline void dbg_array(T arr, size_t n) {
  cout << '[';

  print_array(arr, n, "]", ", ");
}
template <typename T> inline void dbg_map(T m) {
  cout << '{' << endl;

  for (auto [key, value]: m) {
    cout << "  " << key << ": " << value << endl;
  }

  cout << '}' << endl;
}

template <typename T> inline void dbg_set(T s) {
  cout << '{';

  for (auto value: s) {
    cout << value << ", ";
  }

  cout << '}' << endl;
}
template <typename T1, typename T2> inline void dbg(pair<T1, T2> pair) {
  cout << '(' << pair.first << ", " << pair.second << ')' << endl;
}
template <typename T> inline void dbg(vector<T> &arr) { dbg_array(arr, arr.size()); }
template <typename T, size_t S> inline void dbg(array<T, S> &arr) { dbg_array(arr, arr.size()); }
template <typename T> inline void dbg(T arr[], size_t n) { dbg_array(arr, n); }
template <typename K, typename V> inline void dbg(map<K, V> m) { dbg_map(m); }
template <typename K, typename V> inline void dbg(unordered_map<K, V> m) { dbg_map(m); }
template <typename T> inline void dbg(set<T> s) { dbg_set(s); }
template <typename T> inline void dbg(unordered_set<T> s) { dbg_set(s); }

void solve() {
  int n, a(0), b(1);
  cin >> n;

  vector<int> fib{0, 1};

  if (n == 0) {
    cout << "0 0 0" << endl;
    return;
  }

  if (n == 1) {
    cout << "1 0 0" << endl;
    return;
  }

  if (n == 2) {
    cout << "1 1 0" << endl;
    return;
  }

  while (a + b < n) {
    int c = a + b;
    fib.push_back(c);
    a = b;
    b = c;
  }

  cout << fib[fib.size() - 4] << ' ' << fib[fib.size() - 3] << ' ' << fib[fib.size() - 1] << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  solve();

	return 0;
}
