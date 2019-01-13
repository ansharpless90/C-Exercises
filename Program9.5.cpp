#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{

string filename = "prices.dat";
string descrip;
double price;

ifstream inFile;

inFile.open(filename.c_str());

if (inFile.fail())
  {
   cout<<"\nThe file was not successfully opened"
       <<"\n Please check that the current file exists."
       <<endl;
   exit(1);
  }

//read and display the file's contents
inFile >> descrip >> price;
while(inFile.good()) // check next character
  {
   cout<< descrip << ' '<<price << endl;
   inFile >> descrip >> price;
  }

inFile.close();

return 0;
}
