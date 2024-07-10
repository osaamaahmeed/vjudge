// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n"

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   string s; cin >> s;
//   int open = 0, counter = 0;
//   for (int i = 0; i < s.size(); i++) {
//     if (s[i] == '(') open++;
//     else if (s[i] == ')' && open) {counter+=2; open--;}
//   }
//   cout << counter;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPair (char start, char end) {
  if (start == '(' && end == ')') return 1;
  if (start == '{' && end == '}') return 1;
  if (start == '[' && end == ']') return 1;
  else return 0;
}

void balancedCounter (string s) {
  stack<char> stack;
  int counter = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[') stack.push(s[i]);
    else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
      if (!stack.empty() && isPair(stack.top(), s[i])) {stack.pop(); counter++;}
    }
  }
  cout << 2*counter;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  balancedCounter(s);
}