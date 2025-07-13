#include <iostream>
#include <cmath>

int main ()
{
 
    double a;
    double b;
    double c;

    std::cout << " Enter side A : ";
    std::cin >> a;

    std::cout << " Enter sude B : " ;
    std::cin>> b;



    a= pow(a,2);
    b= pow (b, 2);
    c= sqrt(a+b);

    //The about syntax also can be written as:
    //c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side c is :" << c << "\n";
    std::cout << "The hypotenuse is: " << c << "\n";
    
   









    return 0;
}