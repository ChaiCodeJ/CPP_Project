/*

	Tic Tac Toe	
	 1 | 2 | 3
	---|---|---
	 4 | 5 | 6
	---|---|---
	 7 | 8 | 9

*/

#include<bits/stdc++.h>
#define IFWINER(x,y,z,ch) if (arr[x-1] == ch && arr[y-1] == ch && arr[z-1] == ch)

using namespace std;


char arr[9];

// bool winner()
// {
// 	if ()
// }

void Prt()
{
	system("cls");
	cout << "Player 1 - [x]          Player 2 - [o]\n\n";

	for (int i = 0; i <= 8; i+=3)
	{
		cout <<"               "<< arr[i] << " | " << arr[i+1] << " | " << arr[i+2]<<endl;
		if (i != 6)
			cout <<"              ---|---|---" << endl;
		else cout << endl;
	}
}

bool Winner(char ch)
{
	IFWINER(1,2,3,ch) return 1;
	IFWINER(4,5,6,ch) return 1;
	IFWINER(7,8,9,ch) return 1;
	IFWINER(1,4,7,ch) return 1;
	IFWINER(2,5,8,ch) return 1;
	IFWINER(3,6,9,ch) return 1;
	IFWINER(1,5,9,ch) return 1;
	IFWINER(3,5,7,ch) return 1;
	return false;


}
void XuliPlayer()
{

	system("cls");
	int key2 = 10;
	int player = 1;
	int dem = 0;


	while (dem != 9)
	{
		Prt();
		//---------------------------------------------------------------------

		if (Winner('x')) 
			{
				cout << "\n\n               Game Over\n";
				cout <<     "             Player[1] WINS\n\n";
				exit(1); 
			}
			else if (Winner('o'))
			{
				cout << "\n\n               Game Over\n";
				cout <<     "             Player[2] WINS\n\n"; 
				exit(1);
			}

		//-------------------------------------------------------------------	
		cout << " Den luot Player[" << player <<"]: "; cin >> key2; cout << endl;


		while (arr[key2-1] != '\0')
		{
			cout << "Ban chon vi tri khong dung!!!\n";
			cout << "Player[" << player << "] di lai: "; 
			cin >> key2; cout << "\n"; 
		}
		//-----------------------------------------------------------------------


		if (key2 != 0)
		{
			if (player == 1)
			{
				arr[key2-1] = 'x';
				player++;
			}
			else
			{
				arr[key2-1] = 'o';
				player--;
			}
			

		}
		dem++;

	}
	Prt();
	if (Winner('x')) 
	{
		cout << "\n\n               Game Over\n";
		cout <<     "             Player[1] WINS\n\n";
		exit(1); 
	}
	else if (Winner('o'))
	{
		cout << "\n\n               Game Over\n";
		cout <<     "             Player[2] WINS\n\n"; 
		exit(1);
	}
	else
	{
	cout << "\n\n               Game Over\n";
	cout << "               No Winner\n\n"; }
}

void Giaodien()
{
	system("cls");
	int key;


	cout << "   -Tic Tac Toe- \n\n";
	cout << "1. Bat dau tro choi \n";
	cout << "2. Thoat tro choi \n";
	cout << "Nhap lua chon: "; cin >> key;
	cout << endl;


	switch(key){
		case(1):
		{
			XuliPlayer();
			break;
		}
		case(2): 
		{
			exit(1);
			break;
		}
	}
}

int main()
{
	memset( arr, '\0', sizeof(char)*9);
	Giaodien();
}
