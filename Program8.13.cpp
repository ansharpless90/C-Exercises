#include<iostream>
using namespace std;

int findMax(int [], int); //function prototype

int main()
{
const int NUMPTS = 5;

int nums[NUMPTS] = {2, 18, 1, 27, 16};

cout<<"\nThe maximum value is "
    << findMax(nums, NUMPTS) << endl;

return 0;
}

//this function returns the maximum value in an array of ints
int findMax(int vals[], int numels)
{
int i, max = vals[0];

for(i=1; i < numels; i++)
  if (max < vals[i])
    max = vals[i];
return max;
}
