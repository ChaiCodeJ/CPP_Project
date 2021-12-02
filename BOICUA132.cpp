#include<bits/stdc++.h>

using namespace std;


int main()
{

	long long /*arr[10000],*/l,r,sum = 0;
	cin >> l >> r;
	for (int i = l; i <= r;i++)
		if (i % 13 != 0 )
		{
			sum += i;
		}
	cout << sum;
}

