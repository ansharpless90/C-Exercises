#include <iostream>
using namespace std;

int findMax(int, int); //the function prototype

int main()
{
int firstnum, secnum, max;

cout<< "\nEnter a number: ";
 cin>> firstnum;
cout<< "Great! Enter a second number: ";
 cin>> secnum;

max = findMax(firstnum, secnum); //The function is called here

cout<< "\nThe maximum of the two numbers is " <<max << endl;

return 0;
}



int findMax(int x, int y)
{
int maxnum;

if (x >=y)
  maxnum = x;

else
  maxnum = y;

return maxnum;
}
