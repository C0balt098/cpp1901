#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	int v = 0b1111;//15 in decimal
	std::<<"The namber 42 in octal "<<oct<<42 <<'\n'
		<<"The numver 42 in decimal;"<<dec <<v<<'\n'
		<<"The number 42 n hex:"<<hex <<42<<'\n'
	int n; //=0x2a; -> hex
	istringstream("2A")>>hex>>n;
	cout << dex <<"Parsing \"2A\"as hex gives "<< n <<'\n';
	//the output base is sticky until changed
	cout <<hex <<"42 as hex gives"<<42
	<<"and 21 as hex gives"<<21 <<'\n';
}