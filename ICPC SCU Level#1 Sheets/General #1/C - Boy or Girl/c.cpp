#include <bits/stdc++.h>
using namespace std;

int main () {
  string s; cin >> s;
  int counter = 0;
  for (int i = 0; i < s.size()-1; i++)
  {
    for (int j = i+1; j < s.size(); j++)
    {
      if (s[i] == s[j]) {counter++; break;}
    }
  }
  (s.size()-counter) % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}