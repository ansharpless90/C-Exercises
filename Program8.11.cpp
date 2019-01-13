#include<iostream>
using namespace std;

void swap( double *, double *); //function prorotype

int  main()
{


double firstnum = 20.5, secnum = 6.25;

swap(&firstnum, &secnum);
return 0;
}

// this function illustrates passing pointer arguments

void swap(double *nm1Addr, double *nm2Addr)
{

cout << "The number whose address is in nm1Addr is "
     << *nm1Addr << endl;
cout << "The number whose address is in nm2Addr is "
     << *nm2Addr << endl;

return;
}
