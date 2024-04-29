#include <bits/stdc++.h>
using namespace std;

int main () {
  int n; cin >> n;
  n%10 == 9 || n/10 == 9 ? cout << "Yes" : cout << "No";
}