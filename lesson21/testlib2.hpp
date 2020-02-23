#include 'testlib.hpp'
#include <iostream>
int gg(){
	srand(time(0));
	int count = random(15,20);
	int line[count];
	int summ = 0;
	std::cout<<"Количество отрезков = "<<count<<std::endl;
	for (int i =0,i < count,i++){
		line[i]=random(31,39);
		std::cout<<"otrezok["<<i<<"] = "<<line[i]<<std::endl;
		summ +=line[i];
	}


	return summ;
}