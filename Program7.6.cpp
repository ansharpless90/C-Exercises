#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

const int NUMROWS = 3;
const int NUMCOLS = 4;

int i, j;
int val [NUMROWS][NUMCOLS] = {8,16,9,52,3,15,27,6,14,25,2,10};

cout << "\nDisplay of val array by explicit element "
     << endl << setw(4) << val[0][0] << setw(4) << val[0][2]
     <<setw(4) << val[0][2] << setw(4)<< val [0][3]
     <<endl << setw(4) << val[1][0]<< setw(4) << val [1][1]
     <<setw(4) << val[1][2] << setw(4) << val[1][3]
     <<endl << setw(4) << val [2][0] << setw(4) << val[2][1]
     << setw(4) << val[2][2] << setw(4) << val[2][3];


cout <<"\n\nDisplay of val array using a nested for loop";

for (i = 0; i < NUMROWS; i++)
{
  cout <<endl; //print a new line for each row
  for(j = 0; j < NUMCOLS; j++)
    cout << setw(4) << val[i][j];
}


cout << endl;

return 0;
}
