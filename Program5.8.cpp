#include <iostream>
using namespace std;

int main()
{

const int HIGHGRADE = 100;
double grade, total;

grade = 0;
total = 0;

cout << "\nTo sto entering grades, type in any number";
cout << "\n greater tham 100.\n\n";
cout << "Enter a grade: ";
 cin >> grade;


while(grade <= HIGHGRADE)
  {
   total = total + grade;
   cout << "Enter a grade: ";
    cin >> grade;
  }

cout << "\nThe total of the grades is " << total << endl;

return 0;
}
