#include <iostream>
#include <vector> // we used it because we are using vector in this code for example std::vector<int> numbers; // vector is a dynamic array that can grow and shrink in size

//typedef std::vector<std::pair<std::string, int>> pairlist ; // for long typo typedef is used to shorten the type name by give it a new name//
//typedef int number_t;
//typedef std::string text_t;
 using text_t= std::string; // using typedef to shorten the type name
 using number_t= int; // using typedef to shorten the type name

int main () { 
    text_t firstName = "Arjun"; // using typedef to shorten the type name
    number_t age=20; // using typedef to shorten the type name

    std::cout <<age << "\n"; // Output the age
    std::cout << firstName << "\n"; // Output the first name
}

