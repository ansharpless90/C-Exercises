#include<iostream>
using namespace std;

int main()
{


const int MAXELS = 5;

int i, max, nums[MAXELS] = {2, 18, 1, 27, 16};

max = nums[0];

for(i = 0; i < MAXELS; i++)
  if (max < nums[i])
    max = nums[i];;

cout << "The maximum value is " << max << endl;



return 0;
}
