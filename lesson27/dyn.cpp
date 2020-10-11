#include  <iostream>
#include <cstring>
int main(){
	std::cout<<"Enter a positiv integer: ";
	int length = 0;
	srd::cin>>length;

	int *array = new int [length];

	for(int i = 0; i < length; i++)
	array[i] = 0;
	for(int i = 0; i < length;i++)
	{
		std::cout<"enter: "<<(i+1)<< "number of">>std::endl;
		std::cin>>array[i];
	}
	return 0;
}