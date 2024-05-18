#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  string s1, s2; cin >> s1 >> s2;
  for (int i = 0; i < n; i++)
  {
    if (s1[i] != s2[i] && s1[i] != '0' && s1[i] != '1' && s2[i] != '0' && s2[i] != '1') {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}