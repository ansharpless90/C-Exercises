#include <iostream>
using namespace std;

int main()
{

const int MAXNUMS = 4;
int count;
double num, total, average;

cout <<"\nThis program will assk you to enter "
     << MAXNUMS << " numbers.\n\n";
count = 1;
total = 0;

while (count <= MAXNUMS )
  {
   cout << "Enter a number: ";
    cin >> num;
   total = total + num;

   count++;
  }

count--;
average = total/count;

cout << "\nThe average of the numbers is "
     << average << endl;


return 0;
}
