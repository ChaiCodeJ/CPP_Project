#include<bits/stdc++.h>

using namespace std;


int a[100001], b[100001];


int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (arr[m] == x) 
            return m; 
  
        if (arr[m] < x) 
            l = m + 1; 
  
        else
            r = m - 1; 
    } 
  
    return -1; 
} 
// int binarySearch(int a[], int n, int x){
// 	int l = 0, r = n-1;
// 	while (l < r){
// 		int mid = (l+r)/2;
// 		if (a[mid] < x){
// 			l = mid+1;
// 		}
// 		else{
// 			r = mid;
// 		}
// 	}
// 	if (a[l] == x){
// 		return l;
// 	}
// 	return -1;
// }

void printArray(int a[], int low, int high)
{
	for (int i = low; i <= high; i++)
	{
		cout << a[i] << " ";
	}
}

bool solve(int a[], int b[], int n, int k)
{
	b[0] = a[0];
	for (int i = 1; i < n; i++ )

		b[i] = b[i-1] + a[i];

	for (int i = 0; i < n; i++)
	{

		if (b[i] == k) 
		{

			printArray(a, 0, i);
			return true;
		}
		else if (b[i] > k)
		{

			int tmp = binarySearch(b, 0, i, b[i] - k);
			if (tmp != -1)
			{

				printArray(a, tmp + 1 , i);
				return true;
			}
		}

	}
}

int main()
{
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	bool kt = solve(a,b,n,k);
	if (!kt) cout << "-1";
}