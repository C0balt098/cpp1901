#pragma once
#include <iostream>
#include <string>
int getLength(std::string name ){
	std::cout<<"Enter your name"<<std::endl;
	std::cin>>name;
	std::cout<<"Hello,"<<name<<std::endl;
	std::cout<<"Length: "<< name.length()<<std::endl;
return name.length();

}