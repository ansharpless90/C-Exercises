#include <iostream>
using namespace std;

int main()
{

const int NUMGRADES = 4;
const int NUMSTUDENTS = 20;
int i, j;
double grade, total, average;

for ( i = 1; i <= NUMSTUDENTS; i++)//start of outer loop
  {
   total = 0;//clear the total for this student
   for (j = 1; j <= NUMGRADES; j++)//start of inner loop
     {
      cout<<"Enter an examination grade for this student: "
          << j << ":";
       cin >> grade;
      total = total + grade;//add the grade to the total
     }//end of inner loop
    
    average = total / NUMGRADES;//calculate the average

    cout<< "\nThe average for student " << i
        << " is " <<average<<"\n\n";
   }//end of outer loop







return 0;
}
