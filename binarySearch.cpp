#include<bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int low, int high, int k)
{

	if (low <= high){

		int mid = (low + high)/2;

		if (a[mid] == k) return a[mid];

		if (a[mid] > k ) 

			return binarySearch(a, low, mid - 1, k);

		return binarySearch(a, mid + 1, high, k);
	}
	return -1;
}

int main()
{
	int n, k;
	int arr[100001];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << binarySearch(arr, 0, n, k);
}