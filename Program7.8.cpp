#include<iostream>
#include<iomanip>
using namespace std;

const int ROWS =3;
const int COLS = 4;

void display(int[ROWS][COLS]); //function prototype
int main()
{
int val[ROWS][COLS] = {8,16,9,52,
                       3,15,27,6,
                       14,25,2,10};

display(val);
return 0;
}

void display(int nums[ROWS][COLS])
{
int rowNum, colNum;
for (rowNum = 0; rowNum < ROWS; rowNum++)
  {
   for(colNum = 0; colNum < COLS; colNum++)
     cout<<setw(4) << nums[rowNum][colNum];
   cout<<endl;
  }

return;
}
