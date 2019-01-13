#include<iostream>
using namespace std;

int main()
{


const double LIMIT = 3000.0;
int idNum;
double miles;

cout <<"Please type in the car number and mileage: ";
cin >> idNum >> miles;

if(miles > LIMIT)
  cout<< " Car " << idNum << " is over the limit. "<<endl;

cout << "End of program output." << endl;



return 0;
}
