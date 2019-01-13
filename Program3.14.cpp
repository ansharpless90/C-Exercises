#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


const double SALESTAX = 0.05;
double amount, taxes, total;

cout<< "\nEnter the amount purchased: ";
cin >> amount;
taxes = SALESTAX * amount;
total = amount + taxes;

cout << setiosflags(ios::fixed)
     << setiosflags(ios::showpoint)
     <<setprecision(2);
cout << "The sales tax is " << setw(4) << taxes << endl;
cout << "The total bill is " << setw(5) << total << endl;


return 0;



}

