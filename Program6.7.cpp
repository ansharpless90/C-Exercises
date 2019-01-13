#include <iostream>
using namespace std;

template <class T>  //template prefix
T abs(T value)      //function header
{
  T absnum;    //variable declaration

if (value < 0)
  absnum = -value;

else
  absnum = value;

return absnum;

}

int main()
{
  int num1 = -4;
  float num2 = -4.23F;
  double num3 = -4.23456;

  cout << "The absolute value of " << num1
        << " is " << abs(num1) << endl;

  cout <<"The absolute value of " << num2
       << " is " << abs(num2) << endl;

  cout << "The absolute value of " << num3
       << " is " << abs(num3) << endl;

return 0;
}

