/*
#include "bits/stdc++.h"
using namespace std;
using gg = long long;
int main()
{
  //ios::sync_with_stdio(false);
  //cin.tie(0);
  freopen("CCF-201903-1.txt", "r", stdin);
  gg ni, ai;
  cin >> ni;
  gg M1, M2, Mid1, Mid2;
  for (gg i = 0; i < ni; ++i)
  {
    cin >> ai;
    if (i == 0)
    {
      M1 = ai;
    }
    else if (i == ni - 1)
    {
      M2 = ai;
    }
    else if (ni % 2 == 1 and i == ni / 2)
    {
      Mid1 = Mid2 = ai;
    }
    else if (i == ni / 2)
    {
      Mid1 = ai;
    }
    else if (i == ni / 2 - 1)
    {
      Mid2 = ai;
    }
  }
  cout << max(M1, M2) << " " << fixed
       << setprecision((Mid1 + Mid2) % 2 == 0 ? 0 : 1) << (Mid1 + Mid2) / 2.0
       << " " << min(M1, M2);
  return 0;
}
*/

#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201903-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg n, m1, m2;
  cin >> n;

  vector<gg> ai(n);
  for (gg &i : ai)
  {
    cin >> i;
  }
  sort(ai.begin(), ai.end());

  if (n % 2 == 1)
  {
    m1 = m2 = ai[(n - 1) / 2];
  }
  else
  {
    m1 = ai[n / 2];
    m2 = ai[n / 2 - 1];
  }

  cout << ai[n - 1] << " " << fixed << setprecision((m1 + m2) % 2 == 1 ? 1 : 0) << (m1 + m2) / 2.0 << " " << ai[0];
  return 0;
}
