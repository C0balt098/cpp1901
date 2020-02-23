#include <iostream>
#include <string>
#include "lib.hpp"
#include <ctime>
 long int random();//prototype


int main(){
	srand(time(0));

	std::string name = "";
	int summ = 0;
	int summ2 = 0;
	int length = getLength(name);

	int array[length];//
	for(int i = 0;i <length;i++){
		array[i]= 0;
	}
	for(int i = 0;i <length;i++){
		array[i]= random();
	std::cout<<"array["<<i<<"] = "<<array[i]<<std::endl;
	summ +=array[i];
	if (array[i]%2==0)summ2 +=array[i];
	}
	std::cout<<"avarage: "<<(float)summ/length<<std::endl;
	std::cout<<"summ: "<<summ<<std::endl;
	std::cout<<"summ2: "<<summ2<<std::endl;
	return 0;
}
 long int random()
{
	return 1 + rand() % 50;// 1 to 50 include 50 too

}