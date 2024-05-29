#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s,t; cin >> s >> t;
  int index = 0;
  string temp;
  for (int i = 0; i < s.size(); i++) {
    if (index == 2) break;
    if (t[index] == char(int(s[i]) - 32)) {
      index++;
      temp+=char(int(s[i]) - 32);
    }
  }
  // cout << temp << endl;
  if (s.find(char(t[2]-32)) != s.npos) {
    cout << "Yes";
    // return 0;
  } else if (index == 2) {
    temp+="X";
    if (temp == t) cout << "Yes";
    // return 0;
  } else {
    cout << "No";
  }

}