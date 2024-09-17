//Samantha Pintor
//Lab 2 
//9-17-2024

#include <iostream>
#include <string>

using namespace std; 

int main ()
{
    string cerealName; 
    int calories; 
    int ounces; 

    cout << "Enter the name of the cereal brand" << endl; 
    cout << "Enter the number of ounces in that cereal" << endl; 
    cout << "Enter the number of calories of that cereal" << endl; 
    
    cin >> cerealName; 
    cin >> calories >> ounces; 

    cout << "One serving of" << cerealName << " " << "is" << ounces << " " << "ounces and has" << calories << " " << "calories per ounces"
         <<endl; 


    return 0;
}