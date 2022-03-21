#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("201903-1.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(0);

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