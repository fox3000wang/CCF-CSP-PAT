#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201803-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);

  gg n = -1, last = 0, o = 0;
  while (n != 0)
  {
    cin >> n;
    if (n == 1)
    {
      o++;
      last = 0;
    }
    if (n == 2)
    {
      o += 2;
      o += last;
      last += 2;
    }
  }

  cout << o;
  return 0;
}