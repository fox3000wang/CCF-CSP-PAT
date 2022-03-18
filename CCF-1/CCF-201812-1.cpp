#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201812-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg r, y, g, n, k, t, o = 0;
  cin >> r >> y >> g >> n;

  for (gg i = 0; i < n; i++)
  {
    cin >> k >> t;
    if (k == 0 or k == 1)
    {
      o += t;
    }
    if (k == 2)
    {
      o += (t + r);
    }
  }

  cout << o;
  return 0;
}