#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,d = 0,d2 = 0;
	cin >> n;
	long long *arr = new long long[n];
	long long *arr2 = new long long[n];

	for (int i = 1; i <= n; i++)
		{
			cin >> k;
			if (k % 2 == 0) 
			{
				arr[d] = k;
				d++;
			}
			else
			{
				arr2[d2] = k;
				d2++;
			}
		}
	
	if (d2 > 0)
	{
		sort(arr2,arr2+d2);
		for (int i = 0; i < d2; i++)
			cout << arr2[i] << " ";
	}
	cout << "\n";
	if (d > 0)
	{	
		sort(arr,arr+d,greater<long long>());
		for (int i = 0; i < d; i++)
			cout << arr[i] << " ";
	}
	delete[] arr;
}