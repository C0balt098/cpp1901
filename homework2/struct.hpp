
#ifndef STRUCT_HPP
#define SRTUCT_HPP
#include <string>
typedef struct
{
std::string n; //name
std::string srn; //surname
std::string second_n//second name
int age;
bool married;
} person;
typedef struct
{
	int day;
	int month;
	int year;
}date
typedef struct
{
    int hous_number;
    std::string street;
    int flat_number;
    int post_index;
    std::string city;
    std::string country;
} workplace;
typedef struct
{
int salary;
std::string currency;
}money
typedef struct{
int value;
int year_procent;
}credit
#endif
