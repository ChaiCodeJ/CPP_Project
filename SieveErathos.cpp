#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<bool> arr(n,1);
	arr[0], arr[1] = 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (arr[i]){
			for (int j = i*2; j <= n; j+=i)
				arr[j] = 0;
		}
	for (int i = 2; i <= n; i++)
		if (arr[i]) cout << i << " ";
}