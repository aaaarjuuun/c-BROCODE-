#include <iostream> 
int main () {

//type conversion = conversion of one data type to another data type
// implicit conversion = automatic conversion of one data type to another data type by the compiler
// explicit conversion = manual conversion of one data type to another data type by the programmer

int correct = 5;
int question = 10;
double score = correct/(double)question * 100; // convert the score to a percentage


std::cout << score << "%";
}