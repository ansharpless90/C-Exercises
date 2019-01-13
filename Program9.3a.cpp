#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
  string filename = "prices.dat"; //create and initialize a string object
                                  //with the filename at the top of the
                                  //main() function
ifstream inFile;

inFile.open(filename.c_str()); //open the file

if(inFile.fail()) //check for succeddful open
  {
   cout << "\nThe file named "  <<filename
        << " was not successfully opened"
        << "\n Please check that the file currently exists."
        << endl;
  exit(1);
  }

cout<<"\nThe file has been successfully opened for reading.\n";

return 0;
}
