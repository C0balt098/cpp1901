#include <iostream>
//#include "struct.hpp"
void menu()
void add_client(std::vector<auto> &myVec)
{
enum Children

}
void menu(){
	int number = 0;
	std::cout<<"Hello,friend . Enter the number of your choise "<<std::endl;
	std::cout<<"1.Print client";
	std::cout<<"2.Add client";
	std::cout<<"3.Clirnt info";
	std::cout<<"Enter the number of choise: ";
	std::cin>>number;
	switch(number){
		case 1:
			print_client();
			break;
			case2:
			std::cout<<"1 - edit client";
			std::cout<<"2 - Add client";
			std::cout<<"3 - remove client"
			cin>>number2;
			if(number2==1){
				edit_client();
			}
			if(number2==2){
				add_client();
			}
			if(number2==3){
				remove_client();
			}
			break;
	}
}