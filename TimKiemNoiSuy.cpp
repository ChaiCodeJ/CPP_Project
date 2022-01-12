int InterPolationSearch(int arr[], int n, int x)
{
  int left = 0;
  int right = n-1;
  while (left <= right && x >= arr[left] && x <= arr[right])
  {
    double val1 = (double) (x - arr[left]) / (arr[right]-arr[left]);
    int val2 = (right-left);
    int Search = left + val1*val2;
  
    if (arr[Search] == x)
      return Search;
  
    if (arr[Search] < x)
      left = Search + 1;
    else
      right = Search - 1;
  }
  return -1;
}
