/*

30 3 30
8
0 10  +10  小明先经过第一段路，用时 10 秒。
1 5        第一盏红绿灯出发时是红灯，还剩 5 秒；小明到达路口时，这个红绿灯已经变为绿灯，不用等待直接通过。
0 11  +11  接下来经过第二段路，用时 11 秒。
2 2   (30+2)-21 = 11  第二盏红绿灯出发时是黄灯，还剩两秒；小明到达路口时，这个红绿灯已经变为红灯，还剩 11 秒。
0 6   
0 3   接下来经过第三、第四段路，用时 9 秒。
3 10  小明到达路口时，这个红绿灯已经变为红灯，还剩两秒。 第三盏红绿灯出发时是绿灯，还剩 10 秒； 
0 3   接下来经过最后一段路，用时 3 秒。



共计 10+11+11+9+2+3 = 46 秒。
*/

#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201812-1.txt", "r", stdin);
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  gg r, y, g, n, k, t, o = 0;
  cin >> r >> y >> g >> n;

  for (gg i = 0; i < n; i++)
  {
    cin >> k >> t;
    if (k == 0 or k == 1)
    {
      o += t;
    }
    if (k == 2)
    {
      o += (t + r);
    }
  }

  cout << o;
  return 0;
}
