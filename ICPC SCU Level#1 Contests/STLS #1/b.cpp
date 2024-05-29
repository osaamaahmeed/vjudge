#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime (int x) {
  if (x == 1) return false;
  if (x == 2) return true;
  for (int i = 0; i < sqrt(x); i++) {if (x % i == 0) return false; }  
  return true;
}

bool revserPrime (int x) {
  int temp = 0;
  while (x) {
    temp += x % 10;
    x /= 10;
  }
  if(prime(temp)) return true;
  else return false;
}

int main () {
  int a,b; cin >> a >> b;
  int counter = 0;
  for (int i = a; i <= b; i++) {
    if (prime(i) && revserPrime(i)) counter++;
  }
  cout << counter;
}