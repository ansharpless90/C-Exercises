#include<iostream>
using namespace std;

double tempvert(double);  // function prototype

int main()
{
const int CONVERTS = 4;
int count;
double fahren;

for (count = 1; count <= CONVERTS; count++)
  {
   cout <<"\nEnter a fahrenheit temperature: ";
    cin >>fahren;
   cout <<"The celsius equivalent is: "
        <<tempvert(fahren) << endl;

  }

return 0;
}


//convert fahrenheit to celsius
double tempvert(double inTempt)
{
return(5.0/9.0) * (inTemp - 32.0);
}
