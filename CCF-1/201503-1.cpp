#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("201503-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, m;
  cin >> n;
  cin >> m;
  gg num[n][m];

  for (gg i = 0; i < n; i++)
  {
    for (gg j = 0; j < m; j++)
    {
      cin >> num[i][j];
    }
  }

  for (gg j = m - 1; j >= 0; j--)
  {
    for (gg i = 0; i < n; i++)
    {
      cout << num[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}