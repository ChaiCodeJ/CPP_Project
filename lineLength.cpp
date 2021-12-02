#include<bits/stdc++.h>

using namespace std;

int main(){
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float result = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	cout << roundf(result * 100)/ 100;
}