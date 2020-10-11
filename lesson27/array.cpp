#include <iostream>
using namespace std;
int main()
{
	int i =0 , n = 0;
	int *p;
	cout<<"How many numbers would you like to type ";
	cin>>i;
	p = new (nothrow) int [i];
	if (p== nullptr)
	cout<<"Error: memory cold not be allocated"
	else
	{
		for (n = 0; n <i; n++ )
		{
			cout<<"Enter "<<(n+1)<< " number of "<<i<": ";
			cin>>p[n];
		}
		cout<<"you have entered: ";
		for(n = 0 ; n < 0 ;n++ )
		cout<< p[n]<< ", "
		cout<<endl;
		delete[]p;
		
	}
}