#include<iostream>
using namespace std;

int main()
{

char marcode;

cout<< "Enter a marital code: ";
cin >>marcode;

if(marcode == 'M')
  cout <<"The individual is married. "<<endl;

else if (marcode == 'S')
  cout <<"The individual is single. "<<endl;

else if (marcode == 'D')
  cout<<"The individual is divorced. "<<endl;

else if (marcode == 'W')
  cout<<"The individual is widowed. "<<endl;

else
  cout<<"An invalid code was entered. "<<endl;


return 0;
}

