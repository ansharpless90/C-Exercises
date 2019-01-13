#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

double taxable, taxes;


cout<< "Please type in the taxable income : ";
cin >> taxable;

if (taxable <= 20000.0)
  taxes = 0.02 * taxable;

else
  taxes = 0.025 * (taxable - 20000.0) + 400.0;


cout << setiosflags(ios::fixed)
     << setiosflags(ios::showpoint)
     << setprecision(2)
     << "Taxes are $ " << taxes << endl;

return 0;

}
