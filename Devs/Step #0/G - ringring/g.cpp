#include <bits/stdc++.h>
using namespace std;

int main () {
  int a,b,c; cin >> a >> b >> c;
  if (a+b > a+c) {
    if (a+c > b+c) cout << b + c;
    else cout << a+c;
  } else {
    if (a+b > b+c) cout << b+c;
    else cout << a+b;
  }
}