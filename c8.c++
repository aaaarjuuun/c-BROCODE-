#include <iostream>

int main ()
{
    //if statement = do something if  a condition is true,
    //if else statement = do one thing if a condition is true and another if it is false
    //else if statement = check for multiple conditions and do something if one of them is true

    int age;

    std::cout << " Enter your age : ";
    std::cin>> age;

    if (age >=18) {
        std::cout << " You are an adult";

    }

    else if (age < 0) {
        std::cout << " You are not born yet ";

    }

    else if (age >=13 & age < 18){
        std::cout<< " You are a teenager";
    }

    else if (age >= 100) {
        std::cout<< " You are a centenarian";
        
    }

    else {
        std::cout<< " You are a not old enough to enter!";

    }
}