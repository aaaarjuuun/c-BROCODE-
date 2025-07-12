#include <iostream>
int main()
{
    // cout << (insertion operator) << "Hello World!" << std::endl; // This line is incorrect, it should be std::cout
    // cin >> (extraction operator) << "Enter a number: "; // This line is incorrect, it should be std::cin



    std:: string name;
    int age;



    std:: cout << "Enter your fullAr name : ";
    std:: getline(std::cin, name); // Using getline to allow spaces in the name input

    std:: cout << " What is your age : ";
    std :: cin>> age;


    std:: cout << "Hello " << name << ", you are " << age << " years old.";


    return 0;
}