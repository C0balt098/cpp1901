#include <iostream>
using namespace std;
void printSize(int *array)
{
	cout<<sizeof(array)<<endl;//*(*array)
	cout<<array[3]<<endl;
	cout<<array[7]<<endl;
}
void printSize2(int *array[])
{
	cout<<sizeof(array)<<endl;//*(*array)

}
int main()
{
int arr[5]{5,3,2,1};
cout<<arr<<endl;
cout<<&arr[0]<<endl;//адрес 0
cout<<&arr[1]<<endl;
cout<<*arr<<endl;
char name[]="Kolya";
cout<<*name <<endl;

int *p = arr;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(ptr)<<endl;
cout<<sizeof(arr)>>endl;
printSize(arr)
//printSize2(arr)
int *ptr2 = new int;
*ptr2 = 8;
delete ptr2;
//cout<<*ptr2<<endl;
ptr2 =nullptr;//0
int *ptr3 = new (std::nothrow) int;
if(!ptr3){
	std::cout<<"Could not allocate memory";
}
return 0;
}