#include<iostream>
using namespace std;

int main()
{
double total = 20.5;  //declare and initialize total
double& sum = total;  //declare another name for total

cout << "sum = " << sum << endl;
sum + 18.6;    //this changes name for total
cout <<"total = " << total << endl;

return 0;
}
