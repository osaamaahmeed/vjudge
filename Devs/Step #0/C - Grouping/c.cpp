#include <bits/stdc++.h>
using namespace std;

int main () {
  int arrA[7] = {1, 3, 5, 7, 8, 10, 12};
  int arrB[4] = {4, 6, 9, 11};
  bool xg1 = false,yg1 = false;
  bool xg2 = false,yg2 = false;
  int x,y; cin >> x >> y;
  if (x == y) {cout << "Yes"; return 0;}


  for (int i = 0; i < 7; i++) {
    if (arrA[i] == x) {xg1 = true;}
    if (arrA[i] == y) {yg1 = true;}
  }
  if (xg1 && yg1) {cout << "Yes"; return 0;}


  for (int i = 0; i < 4; i++)
  {
    if (arrB[i] == x) {xg2 = true;}
    if (arrB[i] == y) {yg2 = true;}
  }
  if (xg2 && yg2) {cout << "Yes"; return 0;}
  else cout << "No";
}