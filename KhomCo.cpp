
/*
    Test 1:
    Input: 
    6 10
    W W W . . . W W W .
    W . W . . W W . . W
    . . . W . . . . . .
    . . . . . . . . . . 
    W . W . . . . . . .
    . W . . . . W . W . 

    Ouput : 
    5
    -----------------------
    Test 2: 
    Input:
    6 10
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . . 
    . . . . . . . . . .
    . . . . . . . . . . 
    Output:
    0

*/
#include<bits/stdc++.h>

using namespace std;
#define For(i,a,b) for (i = a; i <= b; i++);


char Array[1000][1000];
bool Check[1000][1000];

void solve(int i,int j)
{
    // for(int i = 1; i <= Row; i++)
    // {
    //     for (int j = 1; j <= Column; j++)
    //         cout << Array[i][j] << " ";
    //     cout << "\n";
    // }
    
    Check[i][j] = true;
    if (Array[i-1][j-1] == 'W' && !Check[i-1][j-1]) solve(i-1,j-1);
    if (Array[i-1][j] == 'W' && !Check[i-1][j]) solve(i-1,j);
    if (Array[i-1][j+1] == 'W' && !Check[i-1][j+1]) solve(i-1,j+1);

    if (Array[i][j-1] == 'W' && !Check[i][j-1]) solve(i,j-1);
    if (Array[i][j+1] == 'W' && !Check[i][j+1]) solve(i,j+1);

    if (Array[i+1][j-1] == 'W' && !Check[i+1][j-1]) solve(i+1,j-1);
    if (Array[i+1][j] == 'W' && !Check[i+1][j]) solve(i+1,j);
    if (Array[i+1][j+1] == 'W' && !Check[i+1][j+1]) solve(i+1,j+1);


}
int main()
{
    freopen("Task.inp","r",stdin);
    freopen("Task.out","w",stdout);


    int Row, Column;
    int Count = 0;
    memset(Check, false, sizeof(Check));

    cin >> Row >> Column;
    for (int i = 1; i <= Row; i++)
        for (int j = 1; j <= Column; j++)
            cin >> Array[i][j];


    for(int i = 1; i <= Row; i++)
    {

        for (int j = 1; j <= Column; j++)
            if (Array[i][j] == 'W' && !Check[i][j])
            {
                solve(i,j);
                Count++;
            }
    }

    cout << Count;
}

