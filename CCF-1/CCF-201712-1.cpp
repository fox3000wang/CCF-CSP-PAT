/*
#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg ni;
    cin >> ni;
    vector<gg> v(ni);
    for (gg& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    adjacent_difference(v.begin(), v.end(), v.begin());
    cout << *min_element(v.begin() + 1, v.end());
    return 0;
}
*/

#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201712-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg n, o;
  cin >> n;
  gg num[n], mini[n];

  for (gg i = 0; i < n; i++)
  {
    cin >> num[i];
  }

  for (gg i = 0; i < n; i++)
  {
    if (i == 0)
    {
      mini[i] = abs(num[0] - num[1]);
    }
    else
    {
      mini[i] = abs(num[i] - num[i - 1]);
    }

    for (gg j = 0; j < n; j++)
    {
      if (i != j)
      {
        mini[i] = min(mini[i], abs(num[i] - num[j]));
      }
    }
  }

  o = mini[0];
  for (gg i = 1; i < n; i++)
  {
    o = min(o, mini[i]);
  }

  cout << o;
  return 0;
}