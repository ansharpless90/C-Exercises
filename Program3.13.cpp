#include <iostream>
using namespace std;

int main()
{

int num1, num2, num3;
double average;

cout << "Enter three integer numbers: " ;

cin >> num1 >> num2 >> num3;
average = (num1 + num2 + num3) / 3.0;
cout << "The average of the numbers is " << average << endl;

return 0;
}
