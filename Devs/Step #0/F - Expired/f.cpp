#include <bits/stdc++.h>
using namespace std;

int main () {
  int x,a,b; cin >> x >> a >> b;
    if (b <= a) {
        cout << "delicious";
    } else if (b - a <= x) {
        cout << "safe"; 
    } else {
        cout << "dangerous"; 
    }
}

