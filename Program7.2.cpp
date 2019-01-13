#include <iostream>
using namespace std;

int main()

{

const int NUMELS = 5;
int i, grade[NUMELS], total = 0;


for(i = 0; i < NUMELS; i++)
{
  cout <<"Enter a grade: ";
   cin >>grade[i];
}

cout <<"\nThe total of the grades";

for(i= 0; i <NUMELS; i++)
{
  cout<< " " << grade[i];
  total = total + grade[i];
}

cout << " is " << total << endl;





return 0;


}
