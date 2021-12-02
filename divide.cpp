#include<iostream>

using namespace std;

int main()
{
	int n,i,s;
	cin>>n;
	s=0;
	for (i=1;i<=n;i++) {
		if (i % 3==0) {
			cout << i << " ";
			s=s+i;
		}
	}
	cout<< "\n" << s << "\nHello";
	return 0;
}
//78, 94, 232