#include <iostream>

// #include "calc.hpp"
// #include "getInputNumber.hpp"
// #include "hello.hpp"

void hello();
int sub(int a, int b);
int getInputNumber();
int main()
{
    hello();
    // int a = getInputNumber();
    std::cout << sub(getInputNumber(),getInputNumber()) << std::endl;
    // std::cout << add(getInputNumber(),a) << std::endl;
    // std::cout << mult(getInputNumber(),a) << std::endl;
    // std::cout << divi(getInputNumber(),a) << std::endl;


    return 0;

}