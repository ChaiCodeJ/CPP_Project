#include<iostream>

using namespace std;

// void quicksort2(int b[],int l, int r)
// {
//     int i = l, j = r, key = b[(l+r)/2];
//     while (i<=j)
//     {
//         while (b[i] < key) i++;
//         while (b[j] > key) j--;
//         if (i<=j){
//             swap(b[i],b[j]);
//             // int tmp = b[i];
//             // b[i] = b[j];
//             // b[j] = tmp;
//              i++;j--;
//         }
//     }
//     if (i<r) quicksort2(b,i,r);
//     if (l<j) quicksort2(b,l,j);
// }

// void quicksort(int a[],int l, int r)
// {
//     int i = l, j = r, key = a[(l+r)/2];
//     while (i<=j)
//     {
//         while (a[i] < key) i++;
//         while (a[j] > key) j--;
//         if (i<=j){
//             swap(a[i],a[j]);
//             // int tmp = a[i];
//             // a[i] = a[j];
//             // a[j] = tmp;
//             i++;j--;
//         }
//     }
//     if (i<r) quicksort(a,i,r);
//     if (l<j) quicksort(a,l,j);
// }



int main()
{
    int a[1000000],b[1000000],n,x,d1 = 0,d2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 0){
            d1++;
            a[d1] = x;
        }
        else
        {
            d2++;
            b[d2] = x;
        }
    }
    if (d2 != 0)
    {
        //quicksort2(b,1,d2);
        for (int i = 1; i <= d2; i++)
            cout << b[i] << " ";
    }
    cout << "\n";
    if (d1 != 0)
    {
        //quicksort(a,1,d1);
        for (int i =d1; i>=1; i--)
            cout << a[i] << " ";
    }
    
}