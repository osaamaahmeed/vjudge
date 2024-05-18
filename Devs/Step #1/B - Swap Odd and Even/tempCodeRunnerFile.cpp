#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  // string res;
  // for (int i = 0; i < s.size(); i++)  {
    
  // }
  for (int i = 0; i < s.size(); i++)
  {
    swap(s[(2*i) -1], s[2*i]);
  }
  cout << s;
}