#ifndef GETINPUTNUMBER_HPP
#define GETINPUTNUMBER_HPP
#include <iostream>
int getInputNumber(){
	int a = 0;
	std::cout<<"Please enter number: ";
	std::cin>>a;
	return a;
}
#endif