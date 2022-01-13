#include <bits/stdc++.h>
#define Task_Inp "E:/CC++/ThuatToanThamLam/TestCase/CHIAKEO.inp"
#define Task_Out "E:/CC++/ThuatToanThamLam/TestCase/CHIAKEO.out"

using namespace std;

void Quicksort(int Array[], int left, int right)
{
  int i = left, j = right, key = Array[(left+right)/2];
  while (i<=j)
  {
    while (Array[i] < key) i++;
    while (Array[j] > key) j--;
    if (i<=j)
    {
      swap(Array[i], Array[j]);
      i++;j--;
    }
  }
  if (i < right) Quicksort(Array,i,right);
  if (left < j) Quicksort(Array,left,j);
}

int main()
{

  freopen(Task_Inp,"r",stdin);
  freopen(Task_Out, "w", stdout);

  int n,Sum=0;
  int arr[100000];
  cin >> n;
  for (int i =1; i <= n; i++)
    {
      cin >> arr[i];
      Sum += arr[i];
    }
  Quicksort(arr,1,n);
  int result = 0, Candy = 0;
  int i = n;
  while (Candy <= Sum - Candy)
  {
    // cout << arr[i] << " ";
    Candy += arr[i];
    result ++; i--;
  }
  cout << result;
}
