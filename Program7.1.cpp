#include <iostream>
using namespace std;

int main()
{

const int NUMELS = 5;

int i, grade[NUMELS];

for(i = 0; i < NUMELS; i++) //Enter the grades
  {
   cout <<"Enter a grade: ";
    cin >> grade[i];
  }

cout<< endl;

for(i = 0; i <NUMELS; i++) //print the grades
  cout<< "grade [" << i << "] is " << grade[i] <<endl;






return 0;
}
