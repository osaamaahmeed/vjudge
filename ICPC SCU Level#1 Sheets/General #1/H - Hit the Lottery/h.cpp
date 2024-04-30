#include <bits/stdc++.h>
using namespace std;

int main () {
  int n; cin >> n;
  int bills =  0;
  while (n > 0) {
    if (n >= 100) {
      bills++;
      n -= 100;
    } else if (n >= 20) {
      bills++;
      n -= 20;
    } else if (n >= 10) {
      bills++;
      n -= 10;
    } else if (n >= 5) {
      bills++;
      n -= 5;
    } else {
      bills++;
      n--;
    }
  }
  cout << bills;
}