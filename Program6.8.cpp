#include<iostream>
using namespace std;

void newval(double&, double&);  //prototype with two reference parameters

int main()
{

double firstnum, secnum;

cout <<"Enter two numbers: ";
 cin >> firstnum >> secnum;
cout<<"\nThe value of the first number is: "<<firstnum <<endl;
cout<<"The value of the second number is: " <<secnum << "\n\n";

newval(firstnum, secnum); //call the function 

cout << "The value in firstnum is now: " <<firstnum << endl;
cout << "The value in secnum is: " <<secnum <<"\n\n";

return 0;
}


void newval(double& xnum, double& ynum)
{

cout<< "The value in xnum is: " << xnum << endl;
cout<< "The value in ynum is: " << ynum <<endl;

xnum = 89.5;
ynum = 99.5;

return;
}
