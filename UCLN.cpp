#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,d = 1;
	cin >> n;
	for (long long i = 1; i <= (n / 2); i++)
		if (n % i == 0)
		{
			d++;
		}
	cout << d;
}