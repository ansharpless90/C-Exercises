#include<iostream>
using namespace std;

int main()
{

const int ARRAYSIZE = 5;

int *gPtr;  //declare a poiter to an int
int i, grade[ARRAYSIZE] = {98, 87, 92, 79, 85};

gPtr = &grade[0];  //store the starting array address
for( i = 0; i< ARRAYSIZE; i++)
  cout<< "\nElement " << i << " is " << *(gPtr + i);

cout << endl;

return 0;
}
