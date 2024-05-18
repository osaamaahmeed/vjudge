#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    if (s == "YES" || s == "yes" || s == "Yes" || s == "yEs" || s == "yeS" || s == "YEs" || s == "YeS" || s == "yES" || s == "Yes" || s == "yEs" || s == "yeS") cout << "YES\n";
    else cout << "NO\n";
  }
}