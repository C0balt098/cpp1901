#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int random();
int main(){
	srand(time(0));
	int 	a=rand(10);
	int 	b=rand(10);
	int 	c=rand(10);
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<(a+b+c)/3<<endl;
	return 0;
}
int random(){
	int randomNumber = rand()%10
	return randomNumber;
}