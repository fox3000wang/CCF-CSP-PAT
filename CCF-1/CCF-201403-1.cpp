#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201403-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);

  gg n, o = 0;
  cin >> n;
  gg num[n];

  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
  }

  for (gg i = 0; i < n; i++)
  {
    for (gg j = i + 1; j < n; j++)
    {
      if (num[i] + num[j] == 0)
      {
        o++;
      }
    }
  }

  cout << o;
  return 0;
}