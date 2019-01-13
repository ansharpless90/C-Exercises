#include <iostream>
using namespace std;

int firstnum;  //create a global variable named firstnum

void valfun(); //function prototype

int main()
{
int secnum; //create a local variable named secnum

firstnum = 10;
secnum = 20;

cout <<"From main(): firstnum = " <<firstnum <<endl;
cout <<"From man(): secnum = " << secnum <<endl;

valfun(); //call the function valfun

cout <<"\nFrom main() again: firstnum = "
     <<firstnum <<endl;
cout<<"From main() again: secnum = " << secnum <<endl;

return 0;
}

void valfun()  //no values are passed to this number
{
int secnum;  //create a second local variable
secnum = 30;  //this only affects the local variable's value

cout <<"\nFrom valfun(): firstnum = " << firstnum <<endl;
cout <<"From valfun(): secnum = " << secnum <<endl;

firstnum = 40;  //changes firstnum for both functions

return;
}
