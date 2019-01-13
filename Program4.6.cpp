#include<iostream>
using namespace std;
int main()
{

int opselect;
double fnum, snum;

cout <<"Please type in two numbers: ";
cin >> fnum >> snum;
cout<<"Enter a select code: ";
cout<<"\n       1 for addition";
cout<<"\n       2 for multiplication";
cout<<"\n       3 for division  : ";
cin >>opselect;

switch (opselect)
{
  case 1:
   cout << "The sum of the numbers entered is "
        <<fnum + snum <<endl;
  break;
  case 2:
   cout <<"The product of the numbers is "
        <<fnum * snum <<endl;
  break;
  case 3:
   cout<<"The first number divided by the second number is "
       <<fnum / snum <<endl;

  break;
  }  //end of switch


return 0;
}


