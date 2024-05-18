#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s,t;
  cin >> s >> t;
  if (s == t) {cout << "Yes"; return 0;}
  else {
    for (int i = 0; i < s.size(); i++) {
      bool is = true;
      for (int j = 0; j < s.size(); j++)
      {
        if (s[i] != t[j]) {
          is = false;
        } else {
          is = true;
          break;
        }
      }
      if (is == false) {cout << "No"; return 0;}
    }
    
    // cout << "Yes";
  }
}