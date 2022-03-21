#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  // freopen("202109-1-1.txt", "r", stdin);
  freopen("202109-1-2.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

  gg n, max = 0, min = 0;
  cin >> n;

  vector<gg> ai(n);
  for (gg &i : ai)
  {
    cin >> i;
  }

  max += ai[0];
  min += ai[0];
  for (gg i = 1; i < n; i++)
  {
    max += ai[i];
    if (ai[i] > ai[i - 1])
    {
      min += ai[i];
    }
  }

  cout << max << "\n";
  cout << min;
  return 0;
}