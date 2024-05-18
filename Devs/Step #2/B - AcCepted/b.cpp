#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  bool firstUpper = false;
  bool c = false;
  bool allLower = true;
  if (s[0] == 'A') firstUpper = true;
  if (s[2] == 'C' || s[s.size()-2] == 'C') {
    c = true;
    if (s[2] == 'C' && s[s.size()-2] == 'C') c = false;
    for (int i = 0; i < s.size(); i++) {
      if (i == 2 || i == s.size()-2) continue;
      if (s[i] == 'C') {c = false; break;}
    }
  }
  for (int i = 1; i < s.size(); i++)  {
    if (i == 2 || i == s.size()-2) continue;
    if (s[i] > 64 && s[i] < 91) {allLower = false; break;}
  }
  // cout << s[s.size()-2] << endl <<  firstUpper << endl << c << endl << allLower << endl;
  if (firstUpper && c && allLower) cout << "AC";
  else cout << "WA";
}