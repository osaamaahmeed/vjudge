#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  string name = "Timur";
  sort(name.begin(), name.end());
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    if (n > 5) {
      cout << "NO\n";
      continue;
    }
    sort(s.begin(), s.end());
    if (s!=name) {
      cout << "NO\n";
      // continue;
    } else cout << "YES\n";
  }
}