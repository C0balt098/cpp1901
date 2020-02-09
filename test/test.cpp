#include <iostream>
#include <cstring>
#include <string>
int myfunction();


int main()
{

//	char *str;
//	std::cout<<"Введи слово, твар: ";
//	std::cin>>str;
//	int count = strlen(str);
//	std::cout<<"Та дам ...вот количество елементов : "<<count;
//	return count;

myfunction();


return 0;
}

int myfunction()
{
	//char *str;
	std::string str = "";
	std::cout<<"Введи слово, твар: ";
	std::cin>>str;
	int count = str.length();
	std::cout<<"Та дам ...вот количество елементов : "<<count << "\n"; // std::endl;
	return count;

}