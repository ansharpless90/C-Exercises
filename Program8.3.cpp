#include<iostream>
using namespace std;

int main()
{
int *numAddr;  //declare a pointer to an int
int miles, dist; //declare two integer variables

dist = 158 ;
miles = 22;
numAddr = &miles;

cout<< "The address stored in numAddr is " << numAddr << endl;
cout<< "The value pointed to by numAddr is "<< *numAddr << "\n\n";

numAddr = &dist; //now store the address of dist in numAddr
cout <<"The address now stored in numAddr is " << numAddr <<endl;
cout << "The value now pointed to by numAddr is " << *numAddr << endl;

return 0;
}
