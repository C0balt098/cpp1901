#include <iostream>
using namespace std;
int getValueFromUser();
int main()
{
	const short COUNT = getValueFromUser();
	int arr[COUNT][COUNT] ;
	for (int i = 0; i < COUNT; i++)//{arr[i]= 0;}
{
	for(int j =0; j <COUNT;j++){
		arr[i][j]=0;
	}

}
}

int getValueFromUser(){
 	int a = 0;
 	cout<<"Enter number";
 	std::cin >> a;
	return a;
}