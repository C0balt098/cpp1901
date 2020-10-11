#include <iostream>
enum Colors// ennum перечесление
{
	COLOR_RED,
	COLOR_BROWN,
	COLOR_WHITE,
};
enum Animals
{
	ANIMAL_COW = -3,
	ANIMAL_DOG,
	ANIMAL_CAT,
	ANIMAL_HORSE=6,
	ANIMAL_LION = 5,
}
void printColors(Colors color)
{
	if(color ==COLOR_RED)
	std::cout<<"RED";
	else if (color == COLOR_BROWN)
	std::cout<<"BROWN";
	else if(color ==COLOR_WHITE)
	std::cout<<"white";
	else
		st::cout << " who knows..."
}
int main(){
	Colors paint = COLOR_RED;//определение
Colors house(COLOR_WHITE);
std::cout<<paint<<std::endl;

//Animals cats = 7;
printColor(paint);
printColor(COLOR_WHITE);
printColor(static_cast <Colors>(5));
printColor(static_cast <Colors>(1));
	return 0;
}
