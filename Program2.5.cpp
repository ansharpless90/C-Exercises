//Author Adrian Sharpless
//Last Modification Date: 5/22/2017

//Program displays the smallest and largest ranges for 
//different data types and displays the amount of storage
//needed to store them
#include <iostream>
#include <limits>
using namespace std;

int main()
{

cout<< "The smallest character code is " <<SCHAR_MIN<<endl;
cout<< "The largest character code is " <<SCHAR_MAX<<endl;
cout<< sizeof(char) << "byte(s) are used to store characters\n";

cout << "\nThe smallest integer value is "<< INT_MIN<< endl;
cout << "\nThe largest integer value is " << INT_MAX<< endl;
cout << sizeof(int) << " byte(s) are used to store integers\n";

cout <<"\nThe smallest short integer value is " <<SHRT_MIN<<endl;
cout <<"The larget short integer value is " <<SHRT_MAX<<endl;
cout<< sizeof(short) << " byte(s) are used to store short integers\n";

cout<< "The smallest long integer value is " <<LONG_MIN<<endl;
cout<<" The largest long integer value is " <<LONG_MAX<<endl;
cout << sizeof(long) << "byte(s) are used to store long integers\n";



return 0;
}
