#include <iostream>
using namespace std;

int bubbleSort(int[], int); //function prototype

int main()
{
const int NUMEL = 10;
int nums[NUMEL] = {22,5,67,98,45,32,101,99,73,10};
int i, moves;

moves = bubbleSort(nums, NUMEL);

cout<< "The sorted list in ascending order, is:\n";
for(i = 0; i < NUMEL; i++)
  cout <<" " << nums[i];

cout<< '\n'  <<moves << " moves were made to sort this list\n";

return 0;
}

int bubbleSort(int num[], int numel)
{

int i, j, temp, moves = 0;

for(i=0; i < (numel - 1); i++)
{ 
 for(j = 1; j < numel; j++)
    {
     if (num[j]  < num[j-1])
       {
        temp = num[j];
        num[j] = num[j-1];
        num[j-1] = temp;
        moves++;
       }
    }
}

return moves;
}
