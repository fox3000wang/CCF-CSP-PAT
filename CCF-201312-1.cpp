/*
#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg ni, ai;
    cin >> ni;
    map<gg, gg> m;
    while (ni--) {
        cin >> ai;
        ++m[ai];
    }
    cout << max_element(m.begin(), m.end(),
                        [](const pair<gg, gg>& p1, const pair<gg, gg>& p2) {
                            return p1.second < p2.second;
                        }) ->first;
    return 0;
}
*/

#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201312-1.txt", "r", stdin);

  gg ni, ai;
  cin >> ni;
  map<gg, gg> m;
  while (ni--)
  {
    cin >> ai;
    ++m[ai];
  }
  cout << max_element(m.begin(), m.end(),
                      [](const pair<gg, gg> &p1, const pair<gg, gg> &p2) {
                        return p1.second < p2.second;
                      })
              ->first;
  return 0;
}