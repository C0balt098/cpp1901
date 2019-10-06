#include <iostream>
#include <string>

using namespace std ;

int main(){
	string x = "My";
	string y = "name";
	//cout << x + y << endl;
	cout << x << y << endl;

	bool t = 0;
	bool f = 0;
	bool ft1 = true;
	bool ft2 = false;

	//cin >> t;
	//cin >> f;

	cout << boolalpha << ft1 << ft2 << endl;
	cout << t << "" << f << endl;
	cout << noboolalpha << ft1 << ft2 << endl;
	return 0;

}