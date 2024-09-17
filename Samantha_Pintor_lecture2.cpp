//Samantha Pintor
//Lecture 2 
//9-16-2024

#include <iostream>
#include <string>
using namespace std;

int main ()

{
    // Creating variables
    int myNum = 7;
    float myFloatNum = 7.77;
    double myDouNum = 7.71;
    char myLetter = 'Q';
    bool myBoolean = true; 
    string myString = "hello";

    //print variable values 
    cout << "int:" << myNum << endl;
    cout << "float:" << myFloatNum << endl;
    cout << "double:" << myDouNum << endl;
    cout << "char:" << myLetter << endl;

   //comparing the variables
   char char1 = 'A';
   char char2 = 'B'; 
   cout << "A < B = " << (char1<char2) <<endl; 
   
   //performing the operations  
    cout << "2 + 3.5 = " << 2 + 3.5 << endl;
    cout << "6/4 + 3.9 = " << 6/4 + 3.9 << endl;
    cout << "5.4 * 2 -(13.6 + 18/2) = " << 5.4 * 2 -(13.6 + 18/2) << endl;

    
    return 0; 
}
