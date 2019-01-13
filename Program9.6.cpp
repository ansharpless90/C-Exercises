#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{

string filename = "prices.dat";
string line;
ifstream inFile;

inFile.open(filename.c_str());

if (inFile.fail()) //check for a successful open
  {
   cout<< "\nThe file was not successfully opened"
       << "\n Please check that the file currently exists."
       << endl;
   exit(1);
  }

//read and display the file's contents

while(getline(inFile,line))
  cout<< line << endl;

inFile.close();

return 0;

}
