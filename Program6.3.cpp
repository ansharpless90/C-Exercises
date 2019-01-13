#include<iostream>
using namespace std;

template <class T>
void showabs( T number)
{
  if (number < 0)
    number = -number;
  cout << "The absolute value of the number is: "
       << number << endl;

 return;
}



int main()
{

int num1 = -4;
float num2 = -4.23F;
double num3 = -4.23456;

showabs(num1);
showabs(num2);
showabs(num3);



return 0;
}
