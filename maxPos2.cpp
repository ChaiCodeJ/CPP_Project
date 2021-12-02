#include<iostream>

using namespace std;

int main()
{
	int a[50000],n,i,k,max;
	cin>>n;
	for (i=1;i<=n;i++) {
		cin>>(a[i]);
		}
	max=a[1];
	
	for (i=2;i<=n;i++) {
		if (a[i]>=max) {
			max=a[i];
			k=i;
		}
	}
	cout<<max<<' '<<k;
	return 0;
}