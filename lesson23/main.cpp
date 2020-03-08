//#include<sring>
#include <iostream>
#include "struct.hpp"
using namespace std;
string get_name(person man)
{
	return man.name;
}
int main()
{
person vasya;
vasya.name = "Vasya";
vasya.age = 21;
vasya.height = 190;
vasya.weigth = 85;
vasya.country = "Russia";
vasya.married = false;
person ivan={"Ivan",20,170,80,"Ukraine",true};
cout<<"name ="<<ivan.name<<endl;

person people[3];
people[0] = {"Ivan",20,170,80,"Ukraine",true};
people[1] = {"Alax",50,160,80,"USA",false};
people[2] = {"Zacky",25,150,80,"Kavkaz",true};
for(int i=0;i < 2;i++){
	cout<<"name "<<people[i].name<<endl;
	//cout<<"name "<<get_name(people[i])<<endl;
}
//car cars[2];
//for(int i = 0;i < 2;i++){
//	cout<<"Enter the characteristic "<<endl;
//	cout<<"mark ["<<i<<"] ";
//	cin>>cars[i].mark;
//	cout<<"speed ["<<i<<"] ";
//	cin>>cars[i].speed;
//	cout<<"type ["<<i<<"] ";
//	cin>>cars[i].type;
//	cout<<"car["<<i<<"]: "<<"mark = "<<car[i].mark<<"; speed ="<<car[i].speed<<"; type ="car[i].type<<endl;
//}
cout <<get_name(ivan)<<endl;
return 0;
}