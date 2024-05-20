#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s,t; cin >> s >> t;
  string temp = s;
  if (s == t) {cout << "Yes"; return 0;}
  for (int i = 0; i < s.size(); i++) {
    temp = temp[temp.size()-1] + temp;
    temp.pop_back();
    // cout << temp << endl;
    if (temp == t) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No";
}