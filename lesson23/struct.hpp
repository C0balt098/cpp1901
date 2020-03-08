
#ifndef STRUCT_HPP
#define SRTUCT_HPP
#include <string>
typedef struct
{
	std::string name;
	int age;
	int height;
	int weigth;
	std::string country;
	bool married;

} person;
typedef  struct {
	std::string mark;
	int speed;        //km/hour
	char type;

}car;
#endif
