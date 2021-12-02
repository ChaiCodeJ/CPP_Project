#include<bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	cin >> n;
	int * arr = new int[100000000];
	for (int i = 0; i < 2*n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	sort(arr + n, arr + 2*n,greater<int>());
	for (int i = 0; i < 2*n; i++)
		cout << arr[i] << " ";
}