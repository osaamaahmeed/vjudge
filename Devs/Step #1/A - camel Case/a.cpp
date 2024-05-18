#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (int(s[i]) > 64 && int(s[i]) < 91) {
      cout << i+1;
      return 0;
    }  
  }
}