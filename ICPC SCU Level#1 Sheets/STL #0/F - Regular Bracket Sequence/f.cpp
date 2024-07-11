// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n"

// bool isPair (char a, char b) {
//   if (a == '(' && b == ')') return 1;
//   else if (a == '{' && b == '}') return 1;
//   else if (a == '[' && b == ']') return 1;
//   else return 0;
// }

// void solve (string x) {
//   if (x.size() % 2 != 0) {
//     cout << "NO\n";
//     return;
//   }
//   stack <char> s;
//   for (int i = 0; i < x.size(); i++) {
//     if (x[i] == '?') {
//       if (s.empty()) s.push('?');
//       else if (!s.empty() && s.top() != '?') s.push('?');
//       else if (!s.empty() && s.top() == '?') s.pop(); 
//     }
//     // else if (x[i] == '?') if(!s.empty() && s.top() == '?') s.pop();
//     else if (x[i] == '(' || x[i] == '[' || x[i] == '{') {
//       s.push(x[i]);
//     } else if (x[i] == ')' || x[i] == ']' || x[i] == '}') {
//       if (!s.empty() && isPair(s.top(), x[i])) s.pop();
//       else {
//         cout << "NO\n";
//         return;
//       }
//     }
//   }
//   s.empty() ? cout << "YES\n" : cout << "NO\n";
// }

// int main () {
//   // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int t; cin >> t;
//   while (t--) {
//     string s; cin >> s;
//     solve(s);
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve(string s) {
  if (s.size() % 2 != 0) {
    cout << "NO\n";
  } else if ((s[0] == '(' || s[0] == '?') && (s[s.size()-1] == ')' || s[s.size()-1] == '?')) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    solve(s);
  }
}