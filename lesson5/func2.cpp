#include <iostream>
using namespace std;
int returnInt(){
	return 8;
	cout<<"after returnInt"<<endl;

}


//void doPrint(){
	//cout <<"in doPrint()"<<endl;







int main(void){
	cout <<"start main()"<< endl;

	//2
	int x = returnInt();
	cout << x<< endl;
	cout <<"end main()"<< endl;

	return 0;



}
