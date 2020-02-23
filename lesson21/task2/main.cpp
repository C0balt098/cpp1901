//#include 'calc.hpp'
//#include 'func.hpp'
#include <iostream>
#include <string>
using namespace std;
void calc();
std::string func(std::string name);
int main(){
	string str = "Kolya";
	calc();
	cout<<func(str)<<endl;
	return 0;
}