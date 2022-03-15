/*
问题描述
试题编号：	201409-1
试题名称：	相邻数对
时间限制：	1.0s
内存限制：	256.0MB
问题描述：	
问题描述
　　给定n个不同的整数，问这些数中有多少对整数，它们的值正好相差1。
输入格式
　　输入的第一行包含一个整数n，表示给定整数的个数。
　　第二行包含所给定的n个整数。
输出格式
　　输出一个整数，表示值正好相差1的数对的个数。
样例输入
6
10 2 6 3 7 8
样例输出
3
样例说明
　　值正好相差1的数对包括(2, 3), (6, 7), (7, 8)。
评测用例规模与约定
　　1<=n<=1000，给定的整数为不超过10000的非负整数。
*/

#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main()
{
  freopen("CCF-201409-1.txt", "r", stdin);
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
    for (gg j = i; j < n; j++)
    {
      if (num[i] - num[j] == 1 || num[j] - num[i] == 1)
      {
        o++;
      }
    }
  }
  cout << o;
  return 0;
}