#include  <iostream>
#include <cstring>
int main(){
	std::cout<<"Enter a positiv integer: ";
	int length = 0;
	srd::cin>>length;

	int *array = new int[length];
	std::cout<<"Was allocated length: "<<length<<std::endkl;
	array[0]= 7;
	delete[]array;
	array = nullptr[];
	int *array2 = new int[4]{1,2,4,2};


	//char *arr = new chat[14]{"Hello,world "}
	std::string *arr =new std::string[14]{"Hello, "",world};
	char *arr2 = new char[14]
	std::string str = "Hello,world";
std::strcpy(arr2,str);
	std::cout<<&arr2<<std::endl;
	return 0;
}