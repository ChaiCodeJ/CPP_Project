#include<bits/stdc++.h>
#define Task_Inp "E:/CC++/ThuatToanThamLam/TestCase/MINKC.inp"
#define Task_Out "E:/CC++/ThuatToanThamLam/TestCase/MINKC.out"
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
	freopen(Task_Inp,"r",stdin);
	freopen(Task_Out,"w",stdout);
	int arr[100000],n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	quicksort(arr,1,n);
	int min = arr[2] - arr[1];
	for (int i = 3; i<= n; i++)
	{
		if (arr[i] - arr[i-1] < min) min = arr[i] - arr[i-1];
	}
	cout << min;

}
