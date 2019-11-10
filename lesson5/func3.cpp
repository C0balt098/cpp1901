#include <iostream>
using namespace std;
 int getValueFromUser(){
 	int a = 0;
 	cout<<"Enter number";
 	std::cin >> a;
	return a;

 }


int main(void){
	int a = getValueFromUser();
	int b = getValueFromUser();

	cout <<"a+b = "<< a+b <<endl;
	return 0;

}