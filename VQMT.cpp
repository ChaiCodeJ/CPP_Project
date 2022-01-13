
#include <bits/stdc++.h>
#define Task_Inp "E:/CC++/ThuatToanThamLam/TestCase/VQMT.inp"
#define Task_Out "E:/CC++/ThuatToanThamLam/TestCase/VQMT.out"

using namespace std;

int main()
{

  freopen(Task_Inp,"r",stdin);
  freopen(Task_Out, "w", stdout);

  int check[5], Array[100000];
  memset(check, 0, sizeof(check));
  int n;
  cin >> n;
  for (int i =1; i <= n; i++)
  {
    cin >> Array[i];
    check[Array[i]]+=1;
  }
  //Only Group 4
  int result = check[4];

  //Group 3 + Group 1
  int t = min(check[3],check[1]);
  result += t;
  check[3]-=t; check[1] -=t;

  //Only Group 3
  result += check[3];

  //Group 2 + Group 1
  result += check[2] / 2;
  check[2] = check[2] % 2;

  //Only Group 2
  if (check[2] > 0)
  {
    result += check[2];
    check[1] -= 2;
  }

  //Only Group 1
  if (check[1] > 0)
  {
    result += check[1] / 4;
    check[1] %= 4;
    if (check[1] != 0) result +=1;
  }
  cout << result;

}
