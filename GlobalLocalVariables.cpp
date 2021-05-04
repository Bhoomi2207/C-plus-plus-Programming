#include<iostream>
using namespace std;
int globVar = 10; //Gloabal variable
int main()
{
    /*****************************Gloabal and Local Variables*************************/
    int globVar = 12;
    cout<<"Value of global variable is: "<<globVar; //Local variable
    return 0;
}

// Global variable can be accessed by any function in the whole program.
// Whereas, local variable are accessible only to the function in which they are defined.
// Local variables and global variables can have same name.
// The function will find the local variable and if it does not find the local variable it will find the global varible and it will print the gloabl variable.
// By default, function will print the local variable if it will be in the main function.
