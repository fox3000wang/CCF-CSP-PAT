#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("202009-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, X, Y;
  cin >> n >> X >> Y;
  vector<gg> d(n), o(n);

  gg x, y;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    d[i] = (X - x) * (X - x) + (Y - y) * (Y - y);
    o[i] = i;
  }

  for (int i = 0; i <= 3; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (d[i] > d[j] || (d[i] == d[j] && o[i] > o[j]))
      {
        d[i] = d[i] + d[j];
        d[j] = d[i] - d[j];
        d[i] = d[i] - d[j];

        o[i] = o[i] + o[j];
        o[j] = o[i] - o[j];
        o[i] = o[i] - o[j];
      }
    }
  }

  for (int i = 0; i < 3; i++)
  {
    cout << o[i] + 1 << "\n";
  }

  return 0;
}