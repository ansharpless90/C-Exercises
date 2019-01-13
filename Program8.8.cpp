#include<iostream>
#include<new>
using namespace std;

int main()
{
int numgrades, i;

cout<<"Enter the number of grades to be processed: ";
 cin>>numgrades;

int *grades = new int[numgrades]; //Create the array

for(i = 0; i < numgrades; i++)
  {
   cout<< "Enter a grade: ";
    cin>> grades[i];
  }

cout<<"\nAn array was created for " << numgrades << " integers\n";
cout<<" The values stored in the array are:";

for(i = 0; i < numgrades; i++)
  cout<< "\n   "<<grades[i];
cout<<endl;

delete[] grades; //return storage to the heap
                 //the [] is required for array deletions

return 0;
}
