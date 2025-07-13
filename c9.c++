#include <iostream>
 
int main()
{

    //siwtch =  alternative to if else statements

    int month;

    std::cout << " Enter the month (1-12) ";
    std::cin >> month;


    switch (month) {

            case 1:
            std::cout << " January ";
            break;

            case 2: 
            std::cout << "February ";
            break;

            case 3:
            std::cout << " March :";
            break;

            case 4:
            std::cout << " April ";
            break;

            case 5:
            std::cout << " May ";
            break;
        
            case 6:
            std::cout << " June ";
            break;

            case7:
            std::cout << " July ";
            break;

            case8:
            std::cout << " August ";
            break;

            case 9:
            std::cout << " September ";
            break;

            case 10:
            std::cout << " October ";
            break;
            
            case 11:
            std::cout << " November ";
            break;

            case 12:
            std::cout << " December ";
            break;

            //break; // break is used to exit the switch statement
            //if you don't use break then the code will continue to execute the next case even if

            default:
            std::cout << "Please enter a valid number between 1-12 ";

            return 0;
        }




}