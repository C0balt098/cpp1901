#include <iostream>
using namespace std;
int add( int a , int b){
	return a+b;
}
int multiply(int c=1, int d=5){
	return c*d;
}

int main(void){
	cout << add(3,4)<< endl;
	cout <<multiply(9,3)<<endl;
	return 0;
}
