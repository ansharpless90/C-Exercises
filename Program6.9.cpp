#include <iostream>
using namespace std;

void calc(double, double, double, double&, double&); //prtotype

int main()
{

double firstnum, secnum, thirdnum, sum, product;

cout<<"Enter three numbers: ";
 cin>> firstnum>> secnum>> thirdnum;

calc(firstnum, secnum, thirdnum, sum, product); //function call

cout << "\nThe sum of the numbers is: " << sum <<endl;
cout << "The product of the numbers is: " <<product << endl;

return 0;

}


void calc(double n1, double n2, double n3, double& sum, double& product)
{
sum = n1 + n2 + n3;

product = n1 * n2 * n3;

return;
} 
