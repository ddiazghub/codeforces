// Problem: C. Job Interview
// Contest: Educational Codeforces Round 166 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1976/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu May 30 10:38:49 2024

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i64 I64_MAX = numeric_limits<i64>().max();

const string YES = "YES";
const string NO = "NO";

template <typename T> inline void dbg_array(T arr, size_t n) {
  cout << '[';

  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << ", ";
  }

  cout << arr[n - 1] << ']' << endl;
}
template <typename T> inline void dbg_map(T m) {
  cout << '{' << endl;

  for (auto [key, value] : m) {
    cout << "  " << key << ": " << value << endl;
  }

  cout << '}' << endl;
}

template <typename T> inline void dbg_set(T s) {
  cout << '{';

  for (auto value : s) {
    cout << value << ", ";
  }

  cout << '}' << endl;
}
template <typename T1, typename T2> inline void dbg(pair<T1, T2> pair) {
  cout << '(' << pair.first << ", " << pair.second << ')' << endl;
}
template <typename T> inline void dbg(vector<T> &arr) {
  dbg_array(arr, arr.size());
}
template <typename T, size_t S> inline void dbg(array<T, S> &arr) {
  dbg_array(arr, arr.size());
}
template <typename T> inline void dbg(T arr[], size_t n) { dbg_array(arr, n); }
template <typename K, typename V> inline void dbg(map<K, V> m) { dbg_map(m); }
template <typename K, typename V> inline void dbg(unordered_map<K, V> m) {
  dbg_map(m);
}
template <typename T> inline void dbg(set<T> s) { dbg_set(s); }
template <typename T> inline void dbg(unordered_set<T> s) { dbg_set(s); }

void solve() {
  int n, m;
  cin >> n >> m;
  int candidates = n + m + 1;
  int a[candidates], b[candidates], np[candidates - 1], nt[candidates - 1], p[candidates], t[candidates], s[candidates];
  vector<int> skills;

  for (int i = 0; i < candidates; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < candidates; i++) {
    cin >> b[i];
  }

  np[candidates - 2] = candidates - 1;
  nt[candidates - 2] = candidates - 1;

  for (int i = candidates - 3; i > -1; i--) {
    if (a[i + 1] > b[i + 1]) {
      np[i] = i + 1;
      nt[i] = nt[i + 1];
    } else {
      nt[i] = i + 1;
      np[i] = np[i + 1];
    }
  }


  p[0] = 0;
  t[0] = 0;
  s[0] = 0;

  int partition_idx = -1;
  bool programmers_filled = true;

  if (n == 0) {
    partition_idx = 0;
    t[0] = 1;
    s[0] = b[0];
  } else if (m == 0) {
    partition_idx = 0;
    programmers_filled = false;
    p[0] = 1;
    s[0] = a[0];
  } else if (a[0] > b[0]) {
    p[0] = 1;
    s[0] = a[0];
  } else {
    t[0] = 1;
    s[0] = b[0];
  }

  for (int i = 1; i < candidates - 1; i++) {
    if (p[i - 1] == n) {
      if (partition_idx == -1) {
        partition_idx = i;
      }

      p[i] = p[i - 1];
      t[i] = t[i - 1] + 1;
      s[i] = s[i - 1] + b[i];
    } else if (t[i - 1] == m) {
      if (partition_idx == -1) {
        partition_idx = i;
        programmers_filled = false;
      }

      p[i] = p[i - 1] + 1;
      t[i] = t[i - 1];
      s[i] = s[i - 1] + a[i];
    } else if (a[i] > b[i]) {
      p[i] = p[i - 1] + 1;
      t[i] = t[i - 1];
      s[i] = s[i - 1] + a[i];
    } else {
      p[i] = p[i - 1];
      t[i] = t[i - 1] + 1;
      s[i] = s[i - 1] + b[i];
    }
  }

  for (int i = 0; i < candidates; i++) {
    if (i < partition_idx) {
      int p0(0), t0(0), skill(0);

      if (i > 0) {
        p0 = p[i - 1];
        t0 = t[i - 1];
        skill = s[i - 1];
      }

      for (int j = i + 1; j < candidates; j++) {
        if (p0 == n) {
          t0++;
          skill += b[j];
        } else if (t0 == m) {
          p0++;
          skill += a[j];
        } else if (a[j] > b[j]) {
          p0++;
          skill += a[j];
        } else {
          t0++;
          skill += b[j];
        }
      }

      skills.push_back(skill);
    } else {
      int total_skill = s[candidates - 2];

      if (programmers_filled) {
        if (i == candidates - 1)
          skills.push_back(total_skill);
        else
          skills.push_back(total_skill - b[i] + b[candidates - 1]);
      } else {
        if (i == candidates - 1)
          skills.push_back(total_skill);
        else
          skills.push_back(total_skill - a[i] + a[candidates - 1]);
      }
    }
  }

  for (int i = 0; i < candidates; i++) {
    cout << skills[i] << ' ';
  }

  cout << endl;
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
