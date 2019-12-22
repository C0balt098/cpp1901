#include <iostream>
using namespace std;
int getValueFromUser();
int main()
{
	const short COUNT = getValueFromUser();
	int arr[COUNT] ;
	for (int i = 0; index < COUNT; index++){arr[i]= 0;}


	return 0 ;
}

int getValueFromUser(){
 	int a = 0;
 	cout<<"Enter number";
 	std::cin >> a;
	return a;
}