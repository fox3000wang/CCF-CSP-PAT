#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-202012-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg n, w, s, o = 0;
  cin >> n;
  while (n--)
  {
    cin >> w >> s;
    o += w * s;
  }
  o = o > 0 ? o : 0;
  cout << o;
  return 0;
}