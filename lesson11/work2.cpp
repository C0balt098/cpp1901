#include <iostream>
using namespace std;
int main()
{
	int a=0;
	do{
		cout<<"choose 0 to 10";
		cin>>a;
	}while (a<0||a>10||a == 5);

	cout<<a*10;


	return 0;










}