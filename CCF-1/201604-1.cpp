#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("201604-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, o = 0;
  cin >> n;
  gg m = n - 1;
  gg num[n], res[m];

  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
  }

  for (gg i = 1; i < n; i++)
  {
    res[i - 1] = num[i] - num[i - 1];
  }

  for (gg i = 1; i < m; i++)
  {
    if ((res[i] > 0 && res[i - 1] < 0) || (res[i] < 0 && res[i - 1] > 0)) // bad code
    {
      o++;
    }
  }

  cout << o;
  return 0;
}