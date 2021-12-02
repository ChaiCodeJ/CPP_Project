#include <iostream>
using namespace std;

int Divisor(int n)
{
	int count = 0,count2 = 0;
	int i = 2;
	while (n > 1)
    {
    	if (n % i == 0)
    	{
    		count++;
    		if (count == 1) count2++;
    		n = n / i;
    	}
    	else
    	{
    		i++;
    		count = 0;
    	}
    } 	 	
    return count2;
}
int primeDivisor(int a, int b, int k)
{
	int count = 0;
	for (int i = a; i <= b; i++)
	{
		if (Divisor(i) == k) count++;
	}
	return count;
}
 
int main(){
    int a,b,k;
    cin >> a >> b >> k;
    cout << primeDivisor(a,b,k);
}