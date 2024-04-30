#include <bits/stdc++.h>
using namespace std;

int main () {
  int arr[5][5];
  int counter = 0;
  int index1,index2;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
      if (arr[i][j] != 0) {
        index1 = i; index2 = j;
      }
    }
  }
  while (index1 != 2) {
    counter++;
    if (index1 > 2) index1--;
    if (index1 < 2) index1++;
  }
  while (index2 != 2) {
    counter++;
    if (index2 > 2) index2--;
    if (index2 < 2) index2++;
  }
  cout << counter;
}