#include<iostream>
using namespace std;

void swap(double *, double *);  //function prototype

int main()
{

double firstnum = 20.5, secnum = 6.25;

cout<< "The value stored in firstnum is: "<<firstnum <<endl;
cout<< "The value stored in secnum is : "<<secnum << "\n\n";

swap(&firstnum, &secnum);    //call swap

cout <<"The value stored in firstnum is now: "
     <<firstnum<< endl;
cout<<"The value stored in secnum is now: "
     <<secnum<< endl;
return 0;
}

//this function swaps the values in its two arguments
void swap(double *nm1Addr, double *nm2Addr)
{
double temp;

temp = *nm1Addr; //save the firstnum's value
*nm1Addr = *nm2Addr;//move secnum's value into firstnum
*nm2Addr = temp; //change secnum's value
return;
}
