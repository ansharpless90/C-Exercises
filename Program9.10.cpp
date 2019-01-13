#include<iostream>
#include<strstream>
#include<iomanip>
using namespace std;

int main()
{
const int MAXCHARS = 81;    //one  more than the maximum characters in a line
int units = 10;
double price = 36.85;
char buf[MAXCHARS];

strstream inmen(buf, MAXCHARS, ios::out);  //open an in-memory stream

//write to the buffer through the stream
inmen << "No. of units = "
      <<setw(3) << units
      <<"  Price per unit + $"
     << setw(6) << setprecision(2) << fixed << price << '\0';

cout << '|' << buf << '|';

cout << endl;

return 0;
}
