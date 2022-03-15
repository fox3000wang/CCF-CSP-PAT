/*
问题描述
试题编号：	201403-1
试题名称：	相反数
时间限制：	1.0s
内存限制：	256.0MB
问题描述：	
问题描述
　　有 N 个非零且各不相同的整数。请你编一个程序求出它们中有多少对相反数(a 和 -a 为一对相反数)。
输入格式
　　第一行包含一个正整数 N。(1 ≤ N ≤ 500)。
　　第二行为 N 个用单个空格隔开的非零整数,每个数的绝对值不超过1000,保证这些整数各不相同。
输出格式
　　只输出一个整数,即这 N 个数中包含多少对相反数。
样例输入
5
1 2 3 -1 -2
样例输出
2
*/

#include "bits/stdc++.h"
// #include <bits/stdc++.h>
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