#include<iostream>
using namespace std;

int main()
{
const int VALUES = 5;

int nums[VALUES] = {16, 54, 7, 43, -5};
int total = 0, *nPt;

nPt = nums; //store address of nums[0] in nPt
while(nPt < nums + VALUES)
  total += *nPt++;

cout<< "The total of the array elemets is " << total <<  endl;
return 0;
}
