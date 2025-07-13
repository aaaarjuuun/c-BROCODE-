#include <iostream>

int main ()
{
    char grade;

    std::cout << " What letter grade ";
    std::cin >> grade;

    switch(grade){
        case 'A':
        std::cout<< " Excellent ";
        break;

        case 'B':
        std::cout << " Good ";
        break;

        case 'C':
        std::cout << " Average ";
        break;
        
        case 'D':
        std::cout << " Poor ";
        break;
        
        case 'F':
        std::cout << " Failed! ";
        break;

        default:
        std::cout << " Invalid grade ";
        
    }
}