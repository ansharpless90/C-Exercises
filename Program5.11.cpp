#include <iostream>
using namespace std;

//This program calculates the average
//of MAXCOUNT user-entered numbers

int main()
{

const int MAXCOUNT = 5;
int count;
double num, total, average;

total = 0.0;

for( count = 0; count < MAXCOUNT; count ++)
  {
   cout << " Enter a number: ";
    cin >> num;
    total = total + num;
  }

average = total / count;
cout <<"The average of the data entered is " << average
     << endl;



return 0;
}
