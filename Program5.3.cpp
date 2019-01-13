#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int num;

cout<<"NUMBER     SQUARE      CUBE\n"
    <<"------     ------      ----\n";


num = 1;
while(num < 11)
{
  cout<<setw(3) << num << "      "
      <<setw(3) << num * num << "      "
      <<setw(4) << num * num * num << endl;
  num++;    //increment num
}










}


