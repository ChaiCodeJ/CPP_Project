#include<iostream>

using namespace std;

int main(){
	int n, arr[10000],k;
	cin >> n >> k;
	int i = 1;
	bool kt = true;
	while (i < n){
		cin >> arr[i];
		if (i == k && kt){
			i--;
			kt = false;
		}
		i++;
	}
	for (int i = 1; i < n; i++){
		cout << arr[i] << " ";
	}
}