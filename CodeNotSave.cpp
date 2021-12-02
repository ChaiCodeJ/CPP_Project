#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <=sqrt(n);i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    queue<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i <= n, i < 10; i++)
    {
        if (isPrime(i)){
            arr.push(i);
        }
    }
		while(!arr.empty()){
			for (int i = 1; i <= 9; i++)
				{
					int k = arr.front()*10 + i;
					if (k <= n && isPrime(k)){
						arr.push(k);
					}
				}
			cout << arr.front() << " ";
			arr.pop();
		}
}
