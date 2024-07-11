#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  int a=0,b=0,counter=0;
  string res;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') a++;
    else b++;
  }
  if (a > b) {
    bool flag = 0;
    for (int i = 0; i < n; i++) {
      if (flag == 0) {
        // s[i] = 'a';
        res+='a';
        flag = 1;
        counter++;
      } else {
        flag = 0;
        res+='b';
      }
    }
  } else if (b > a) {
    bool flag = 0;
    for (int i = 0; i < n; i++) {
      if (flag == 1) {
        counter++;
        // s[i] = 'b';
        res+='b';
        flag = 0;
      } else {
        res +='a';
        flag = 1;
      }
    }
  } else res = s;
  cout << counter << endl << res;
}