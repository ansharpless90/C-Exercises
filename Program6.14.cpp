#include<iostream>
using namespace std;

void teststat();    //function prototype

int main()
{

int count;
for (count = 1; count <=3; count++)
  teststat();

return 0;

}


void teststat()
{
static int num = 0;
cout <<"The value of the static variable is now"
     <<num <<endl;
num++;
return;
}

