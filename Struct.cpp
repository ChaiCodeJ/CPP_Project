#include<bits/stdc++.h>

using namespace std;

struct Tansuat
{
	int Number;
	int Value;
	void getinfo()
	{
		cin >> Number >> Value;
	}
	void xuat()
	{
		cout << Number << " : " << Value;
	}
};

int main()
{
	Tansuat a1, a2, tmp;
	a1.getinfo();
	a2.getinfo();
	tmp = a1;
	a1 = a2;
	a2 = tmp;
	a1.xuat();
	a2.xuat();
}