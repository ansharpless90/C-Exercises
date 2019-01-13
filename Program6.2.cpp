#include<iostream>
using namespace std;
void findMax(int, int);  //the function prototype


int main()
{
int firstnum, secnum;

cout <<"\nEnter a number: ";
 cin >>firstnum;
cout <<"Great! Enter a second number: ";
 cin >> secnum;

findMax(firstnum, secnum); //the function is called here

return 0;
}

// following is the function findMax

void findMax(int x, int y)
{       //start of function body

int maxnum; //variable declaration

if (x >=y) //find the maximum number
  maxnum = x;

else
  maxnum = y;


cout <<"\nThe maximum of the two numbers is "
     << maxnum << endl;


return;
}  // end of the function body and end of function
