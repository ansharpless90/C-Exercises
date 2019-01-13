#include<iostream>
using namespace std;

int main()
{

const int ARRAYSIZE = 5;

int i, grade[ARRAYSIZE] = {98, 87, 92, 79, 85};

for(i = 0; i < ARRAYSIZE; i++)
  cout <<"\nElement " << i << " is " << *(grade + i);

cout << endl;

return 0;

}
