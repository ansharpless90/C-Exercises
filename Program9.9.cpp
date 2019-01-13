#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int getOpen(ofstream&); //function prototype - pass a
                        // reference to an fstream
void inOut(ofstream&);  //function prototype - pass a
                        //reference to an fstream

int main()
{

ofstream outFile;      // filename is an fstream object

getOpen(outFile);     //open the file
inOut(outFile);       //write to it

return 0;
}

int getOpen(ofstream& fileOut)
{
string name;

cout<< "\nEnter a filename: ";
getline(cin,name);

fileOut.open(name.c_str());   //open the file

if (fileOut.fail())    //check for a successful open
  {
   cout <<"Cannot open te file" << endl;
   exit(1);
  }
else
  return 1;
}


void inOut(ofstream& fileOut)
{
const int NUMLINES = 5; //number of lines
int count;
string line;

cout<<"Please enter five lines of text:" << endl;
for(count = 0; count < NUMLINES; ++count)
  {
   getline(cin,line);
   fileOut << line << endl;
  }
cout<<"\nThe fle has been successfully written.";

return;
}
