#include <bits/stdc++.h>
#define Task_Inp "E:/CC++/ThuatToanThamLam/TestCase/TONGMAX.inp"
#define Task_Out "E:/CC++/ThuatToanThamLam/TestCase/TONGMAX.out"

using namespace std;

void Quicksort(int Array[], int low, int high)
{
	int i = low, j = high, key = Array[(low+high)/2];
	while (i<=j)
	{
		while (Array[i] < key) i++;
		while (Array[j] > key) j--;
		if (i<=j){
			int tmp = Array[i];
			Array[i] = Array[j];
			Array[j] = tmp;
			i++; j--;
		}
	}
	if (i < high) Quicksort(Array,i,high);
	if (j > low) Quicksort(Array,low,j);
}


int main()
{
	freopen(Task_Inp,"r",stdin);
	freopen(Task_Out, "w", stdout);

	int n, k, array[10000];
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> array[i];
	Quicksort(array,1,n);
	int i = 1;
	while (k != 0)
	{
		array[i] = -array[i];
		k--;
		i++;
	}
	int result = 0;
	for (int i = 1; i <= n; i++)
		result += array[i];
	cout << result;
}