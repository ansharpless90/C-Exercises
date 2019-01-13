#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
string filename; // declare a string object with no  initiaization
ifstream inFile;

cout<<"Please enter the name of the file you wish to open: ";
 cin>>filename;

inFile.open(filename.c_str()); //open the file
if (inFile.fail()) //check for a successful open
  {
   cout<<"\nThe file named "<<filename
       <<" was not successfully opened"
       <<"\n Please check that the file currently exists."
       <<endl;
   exit(1);
}

cout<<"\nThe file has been successfully opened for reading.\n";

return 0;
}
