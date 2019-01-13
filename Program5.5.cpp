#include<iostream>
using namespace std;

int main()
{

const int MAXNUMS = 4;
int count;
double num;

cout <<"\nThis program will ask you to enter "
     << MAXNUMS << " numbers.\n";
count = 1;

while ( count <= MAXNUMS)
  {
   cout << "\nEnter a number: ";
    cin >> num;
   cout << "The number entered is " << num;
  
  count++;
}

cout << endl;









return 0;

}
