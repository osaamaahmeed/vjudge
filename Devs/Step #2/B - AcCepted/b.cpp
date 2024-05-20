#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool first (string s) {
  if (s[0] == 'A') return true;
  else return false;
}

bool small (string s) {
  for (int i = 0; i < s.size(); i++) {
    if (i == 0) continue;
    if (i == 2 && s[2] == 'C') continue;
    if (i == s.size()-2 && s[s.size()-2] == 'C') continue;
    if (int(s[i]) > 64 && int(s[i]) < 91) return false;
  }
  return true;
}

bool cChar (string s) {
  if (s[s.size()-2] == 'C' && s[2] == 'C') return false;
  else if (s[s.size()-2] == 'C') return true;
  else if (s[2] == 'C') return true;
  else return false;
}

int main () {
  string s; cin >> s;
  if (first(s) && small(s) && cChar(s)) cout << "AC";
  else cout << "WA";
}