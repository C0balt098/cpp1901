#include <iostream>
#include <typeinfo>
#include <cstddef>//std::nullptr_t
using namespace std;

void doAnything(std::nullptr_t ptr)
{
	cout<<"in doAnything() ";
}
int main()
{
	int a(5);
//	cout<<a<<endl;
//cout<<&a<<endl;

//	cout<<*(&a)<<endl;
	int num = 9;
	int *p_num = &num;//pNum//ptr_num//iPtr...
	cout<< &num<<endl;
	cout<<p_num<<endl;
	cout<<*p_num<<endl;

	cout<<typeid(a).name()<<endl;
	cout<<typeid(&a).name()<<endl;
	cout<<typeid(p_num).name()<<endl;
	cout<<typeid(*p_num).name()<<endl;

	cout<<sizeof(p_num)<<endl;
	cout<<sizeof(*p_num)<<endl;

	//int *ptr1(0);//указатель
	//int *ptr2(NULL);
	int *ptr3= nullptr;//C++11// <--

	doAnything()
	return 0;
}
