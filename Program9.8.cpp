#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{

string fname = "list.dat";    //here is the name of the file you are working with
void inOut(ofstream&);        //function prototype
ofstream outFile;

outFile.open(fname.c_str());

if(outFile.fail())           //check for a successful open
  {
   cout<< "\nThe output file " << fname << " was not successfully opened"
       << endl;

   exit(1);
  }

inOut(outFile);  //call the fuction

return 0;
}

void inOut(ofstream& fileOut)
{
const int NUMLINES = 5; //number of lines of text
string line;
int count;

cout<<"Please enter five lines of text:" << endl;

for(count = 0; count < NUMLINES; count++)
  {
   getline(cin, line);
   fileOut << line << endl;
  }

cout << "\nThe file has beem successfully written." << endl;

return;
}
