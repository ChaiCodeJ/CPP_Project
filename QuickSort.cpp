#include<bits/stdc++.h>
using namespace std;

void quicksort(int a[],int l, int r)
{
    int i = l, j = r, key = a[(l+r)/2];
    while (i<=j)
    {
        while (a[i] < key) i++;
        while (a[j] > key) j--;
        if (i<=j){
            swap(a[i],a[j]);
            i++;j--;
        }
    }
    if (i<r) quicksort(a,i,r);
    if (l<j) quicksort(a,l,j);
}

int main()
{
    int a[100000],n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = rand()% 1000;
    }
    for (int i = 1; i<= n; i++)
        cout << a[i] << " ";
    quicksort(a,1,n);
    cout << "\n";
    for (int i = 1; i<= n; i++)
        cout << a[i] << " ";
}