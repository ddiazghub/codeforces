// Problem: C. Have Your Cake and Eat It Too
// Contest: Codeforces Round #956 (Div. 2) and ByteRace 2024
// Judge: Codeforces
// URL: https://codeforces.com/contest/1983/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun Jul  7 16:48:13 2024

#include <array>
#include <bits/stdc++.h>
#include <numeric>
#include <utility>
#include <vector>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i32 I32_MIN = numeric_limits<i32>().min();
const i64 I64_MAX = numeric_limits<i64>().max();
const i64 I64_MIN = numeric_limits<i64>().min();

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

template <typename T>
void read_vector(vector<T>& a) {
  for (auto& val: a)
    cin >> val;
}

map<int, int> find_ranges(vector<int>& a, int mn) {
  map<int, int> output;
  int sum(0), left(0), right(0);

  while (left < a.size() && right < a.size()) {
    while (sum < mn && right < a.size()) {
      sum += a[right];
      right++;
    }

    while (sum >= mn && left < a.size()) {
      output[left] = right - left;
      sum -= a[left];
      left++;
    }
  }

  while (sum >= mn && left < a.size()) {
    output[left] = right - left;
    sum -= a[left];
    left++;
  }

  return output;
}

vector<pair<int, int>> no_intersect(map<int, int> a, map<int, int> b, map<int, int> c, int n) {
  auto range_a = a.begin();
  auto range_b = b.lower_bound(range_a->first + range_a->second);

  if (range_b == b.end())
    return {};

  auto range_c = c.lower_bound(range_b->first + range_b->second);

  if (range_c == c.end())
    return {};

  return {
    {range_a->first + 1, range_b->first},
    {range_b->first + 1, range_c->first},
    {range_c->first + 1, n}
  };
}

void print_ans(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
  cout << a.first << ' ' << a.second << ' ' << b.first << ' ' << b.second << ' ' << c.first << ' ' << c.second << endl;
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);

  read_vector(a);
  read_vector(b);
  read_vector(c);

  int total = accumulate(a.cbegin(), a.cend(), 0);
  int mn = ceil(double(total) / 3);
  auto ra = find_ranges(a, mn);
  auto rb = find_ranges(b, mn);
  auto rc = find_ranges(c, mn);

  auto ans1 = no_intersect(ra, rb, rc, n);

  if (ans1.size() > 0) {
    return print_ans(ans1[0], ans1[1], ans1[2]);
  }

  auto ans2 = no_intersect(ra, rc, rb, n);

  if (ans2.size() > 0) {
    return print_ans(ans2[0], ans2[2], ans2[1]);
  }

  auto ans3 = no_intersect(rb, ra, rc, n);

  if (ans3.size() > 0) {
    return print_ans(ans3[1], ans3[0], ans3[2]);
  }

  auto ans4 = no_intersect(rb, rc, ra, n);

  if (ans4.size() > 0) {
    return print_ans(ans4[2], ans4[0], ans4[1]);
  }

  auto ans5 = no_intersect(rc, rb, ra, n);

  if (ans5.size() > 0) {
    return print_ans(ans5[2], ans5[1], ans5[0]);
  }

  auto ans6 = no_intersect(rc, ra, rb, n);

  if (ans6.size() > 0) {
    return print_ans(ans6[1], ans6[2], ans6[0]);
  }
  
  cout << -1 << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    solve();

	return 0;
}
