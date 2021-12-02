#include<iostream>
#include<cmath>

using namespace std;

// bool isPrime(long n, int exp)
// {
// 	if (n < 2) 
// 	{
// 		return false;
// 	}
// 	for (long i = 2; i <= exp; i++)
// 	{
// 		if (n % i == 0)
// 		{
// 			return false;
// 		}
// 	}
// 	return	true;
// }
int checkPrime(int n) {
    int i;
    int m;
 
    if (n < 2)
        return 0;
 
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
     
    m = (int) sqrt(n);
    for (i = 5; i <= m; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}
int main()
{
	long a = 1, b = 10000000,count = 0;
	// cin >> a >> b;
	for (long i = a; i <= b; i++)
	{
		// if (isPrime(i,sqrt(i)) == true)
		if (checkPrime(i) == 1)

		{
			count++;
			cout << i << " ";
		}
	}
	cout << "\n";
	return 0;
}
