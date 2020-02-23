#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
//using namespace std;

long int random();

int main()
{
	srand(time(0));

	int arr[10];


	for(int i = 0 ; i < 10; i++)
	{
		arr[i] = random();
		std::cout << arr[i]<<std::endl;
	}
	return 0;
}


long int random(){
	return rand()%20;
}