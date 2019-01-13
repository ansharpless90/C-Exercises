#include<iostream>
#include<fstream>
#include<cstdlib>  //needed for exit

using namespace std;

int main()
{


ifstream inFile;
inFile.open("prices.dat"); //open the file with the
                           //external name prices.dat
if (inFile.fail())        //check for a successful open
  {
   cout << "\nThe file was not successfully opened"
        <<"\n Please check the file currently exists."
        << endl;
   exit(1);
  }
cout<<"\nThe file has been successfully opened for reading."
    <<endl;
  //statements to read data fromt the file are placed here
return 0;
}
