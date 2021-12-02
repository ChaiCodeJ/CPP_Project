#include<iostream>

using namespace std;

int main(){
	int arr[10000];
	int max = 0,pos,n;
	cin >> n;
	for (int i = 1; i<=n;i++)
	{
		cin >> arr[i];
		if (arr[i] >= max)
		{
			max = arr[i];
			pos = i;
		}
	}
	cout << max << " " << pos;
	return 0;
}