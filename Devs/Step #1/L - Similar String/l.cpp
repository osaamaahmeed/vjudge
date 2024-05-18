#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  string s1,s2; cin >> s1 >> s2;
  if (s1 == s2) {cout << "Yes"; return 0;}
  else {
    for (int i = 0; i < n; i++) {
      if (s1[i] == '0' || s1[i] == 'o' || s1[i] == '1' || s1[i] == 'l') s1[i] = 'x';
      if (s2[i] == '0' || s2[i] == 'o' || s2[i] == '1' || s2[i] == 'l') s2[i] = 'x';
    }
    if (s1 == s2) cout << "Yes";
    else cout << "No";
}
}