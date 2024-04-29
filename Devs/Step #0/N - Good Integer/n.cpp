#include <bits/stdc++.h>
using namespace std;

int main () {
  int n; cin >> n;
  string number = to_string(n);
  for (int i = 0; i < 2; i++)
  {
    if (number[i] == number[i+1] && number[i] == number[i+2] && number[i+1]==number[i+2]) {cout << "Yes"; return 0;}
  }
  cout << "No";
}