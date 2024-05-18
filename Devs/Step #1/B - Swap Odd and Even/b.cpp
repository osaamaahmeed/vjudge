#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  string res;
  for (int i = 0; i < s.size(); i+=2)  {
    char temp;
    temp = s[i];
    s[i] = s[i+1];
    s[i+1] = temp;
  }

  cout << s;
}