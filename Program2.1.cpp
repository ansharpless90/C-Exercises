//Author Adrian Sharpless
//Last modification date: 5/22/2017

//Program displays data types and the
//amount of Bytes they use
#include <iostream>
using namespace std;
int main()
{

cout<< "\nData Type   Bytes";
cout<< "\n---------   -----";
//each of the following cout statements
//use sizeof functions to display data type sizes
cout<< "\nint           "<<sizeof(int);
cout<< "\nchar          "<<sizeof(char);
cout<< "\nbool          "<<sizeof(bool);
cout<< '\n';



return 0;
}
