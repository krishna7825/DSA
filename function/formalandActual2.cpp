#include <iostream>
using namespace std;
void printName(int num1, int num2)
{ // Formal parameter
    cout << num1 << endl
         << num2; // function defination
}
int main()
{
    int a, b;
    a = 8;
    b = 7;
    printName(a, b); /*Actual Parameteris a parameter given in 
                        function calling */
    return 0; // function calling
}
/* Pass by value:- In this parameter values are
copied to another variables.
Pass by reference :- in this parameter values are passed 
itself*/