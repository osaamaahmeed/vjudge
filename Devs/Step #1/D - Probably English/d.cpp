#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  bool b = false;
  for (int i = 0; i < n; i++)
  {
    string s; cin >> s;
    if (s == "and" || s == "not" || s == "that" || s == "the" || s == "you") b = true;
  }
  b ? cout << "Yes" : cout << "No";
}