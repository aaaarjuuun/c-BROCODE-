#include <iostream>


int main () {
    int x; // declaration           //int(datatype)stores only integers (whole Numbers) 
    x=5;                            //int age=21;
    int age=20;                     //int years=2023;
    int y;                          //int days=7.5 (Here this can't be stored the decimal portion will be neglated only 7 will be printed by the compiler)
    y=10;

    int sum = x * y ;               //so if you want to store a decimal number you can use float or double datatype
    int days=6.5;                   //float days=6.5; //float stores decimal numbers but it has a limit of 7 digits after the decimal point
                                    //double days=6.5; //double stores decimal numbers but it has a limit of 15 digits after the decimal point

    std::cout<< days << "\n";
    std:: cout<< x <<"\n";
    std:: cout<< y <<"\n";  
    std:: cout<< sum << "\n";





    //single character
    char grade='A'; // char stores only one character
    char initial='B'; // char stores only one character
    char currency= '$'; // char stores only one character
    std:: cout<< grade << "\n";



    std:: cout<< initial << "\n";






    //boolean (true or false)
    bool student = false;  //
    bool power = true;
    bool forsale = false;

    std:: cout<< student << "\n"; // 0 for false and 1 for true
    std:: cout<< power << "\n";   // 0 for false and 1 for true 




    //string (a sequence of characters)(objects that represent a sequence of text or a whole sentences)
    std::string name ="Arjun";
    std::string day = "Friday";
    std::string food = "burgers";
    std:: cout<<"Hello " << name << "\n";
    std:: cout<<"Today is " << day << "\n"; 
    std:: cout<<"I like " << food << "\n";
    std:: cout<<"you are "<< age <<" years old" << "\n";


    return 0; // return 0 means the program has executed successfully
}