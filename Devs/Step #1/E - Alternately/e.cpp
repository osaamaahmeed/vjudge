#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  string s; cin >> s;
  for (int i = 0; i < n-1; i++) {
    if (s[i] == s[i+1]) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}