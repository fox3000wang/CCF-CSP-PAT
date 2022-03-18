#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201612-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg n, o = 0;
  cin >> n;

  vector<gg> ai(n);
  for (gg &i : ai)
  {
    cin >> i;
  }
  sort(ai.begin(), ai.end());

  gg t = ai[ai.size() / 2];
  auto p = equal_range(ai.begin(), ai.end(), t);
  o = (p.first - ai.begin() == ai.end() - p.second ? t : -1);
  cout << o;
  return 0;
}