#include<iostream>
#include<math.h>

using namespace std;

bool checkPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number);i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

long findMaxPrimeWithNDigits(int number)
{
    long max = 1, index = number;
    if (number == 1){return 7;}
    while (index > 0)
    {
        max *=10;
        index--;
    }
    for (int i = max; i >= 1;i--)
    {
        if (checkPrime(i))
        {
            return i;
        }
    }
}
int main(){
    int number;
    cin >> number;
    cout << findMaxPrimeWithNDigits(number) << endl;
}