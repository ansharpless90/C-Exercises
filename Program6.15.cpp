#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{

const int NUMBERS = 10;

double randvalue;
int i;

srand(time(NULL));

for(i = 1; i <= NUMBERS; i++)
{
  randvalue = rand();
  cout<< setw(20) << randvalue<<endl;
}
return 0;

}
