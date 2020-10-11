#include <iostream>
#include <array> //c++11
#include <algorithm> //std::sort
void printLenghth(const std::array<auto,5>&myArray){
	std::cout<<"Array lenghth = "<<myArray.size()<<std::endl;
}
int main(){
int number {4};
 const int COUNT(5);
std::cout <<number<<'\n';
std::cout<<COUNT<<'\n';
//previous standart 'old' array
//data_type array_name[COUNT];
//std::array<int,5> arr1;//обьевление
std::array<double,COUNT> arr3 {1,2,3,4,5,};//обьевление и uniform иницилизация даных
std::array<int,5> arr ={6,2,23,14,55,};//обьевление и иницилизацыя
//std:::array<int,<int,3>3>arr2d = {{1,2,3},{4,5,6,},{7,8,9}},
for (const auto &element : arr )
	std::cout<<element<<' ';
	arr[0] = 78;
std::cout<<std::endl;
	arr.at(2) = 10;
	for (const auto &element : arr )
	std::cout<<element<<' ';
std::sort(arr.begin(),arr.end());
std::cout<<std::endl;
for (const auto &element : arr )
	std::cout<<element<<' ';
///////////////////////////////////


	std::cout<<std::endl;

	std::cout<<arr.at(0)<<std::endl;
	std::cout<<arr.size()<<std::endl;
	std::sort(arr.rbegin(),arr.rend());
std::cout<<std::endl;
for (const auto &element : arr )
	std::cout<<element<<' ';
	std::cout<<std::endl;



	///////////////////
//	std::sort(arr.end(),arr.begin());
//std::cout<<std::endl;
//for (const auto &element : arr )
//	std::cout<<element<<' ';

//	std::cout<<std::endl;
printLenghth(arr);
	return 0;
}