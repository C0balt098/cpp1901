#include <iostream>
using namespace std;
int main(){
	//for
	for(int i = 0;i < 10;i++)
	cout<< i <<endl;

	for(int i = 10;i > 0;i--)
	cout<< i <<endl;

	bool f = 0;
	while(1 && f ){// logic AND = && , or = ||, NOT = !
	cout <<"some while "<<endl;

	}
	do {
			cout <<"some while "<<endl;
	}while(1 && f);
	 int x = sizeof(int);
	 for(int i = 0; i <3 ; i++){
	 	for (int j = 0 ; j <3 ; j++){
	 		cout <<"x";
	 	}
	 	cout <<endl;
	 }
	return 0;
	 }


