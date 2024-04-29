#include <bits/stdc++.h>
using namespace std;

int main () {
  int n,a,b; cin >> n >> a >> b;
  int planA = n*a;
  planA > b ? cout << b : cout << planA;
}