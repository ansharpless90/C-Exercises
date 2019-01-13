#include<iostream>
#include <fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
string filename = "test.dat";
char ch;
long offset, last;

ifstream inFile(filename.c_str());

if (inFile.fail())    //check for a successful open
  {
   cout <<"\nThe file was not successfully opened"
        <<"\n Please check that the file currently exists"
        << endl;
   exit(1);
  }

inFile.seekg(0L,ios::end);  //move to the end of the file
last = inFile.tellg();      //save the offset of the last character

for(offset = 1L; offset <= last; offset++)
  {
   inFile.seekg(-offset, ios::end);
   ch = inFile.get();
   cout  << ch << " : ";
  }

inFile.close();

cout << endl;

return 0;
}
