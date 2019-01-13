#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

const int NUMROWS = 3;
const int NUMCOLS = 4;

int i, j;
int val[NUMROWS][NUMCOLS] = {8,16,9,52,
                             3,15,27,6,
                            14,25,2,10};

//multiply each element by 10 and display it

cout<<"\nDisplay of multiplied elements";
for(i = 0; i < NUMROWS; i++)
  {
   cout << endl; //start each row on a new line
   for ( j = 0; j < NUMCOLS; j++)
   {
    val[i][j] = val[i][j] * 10;
    cout << setw(5) << val[i][j];
   }
  }
cout<< endl;

return 0;
}
