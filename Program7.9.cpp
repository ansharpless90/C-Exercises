#include<iostream>
using namespace std;

int linearSearch(int [], int, int); //function prototype

int main()
{

const int NUMEL = 10;
int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
int item, location;

cout << "Enter the item you are searching for: ";
 cin >> item;

location = linearSearch(nums, NUMEL, item);

if(location > -1)
  cout<<"The item was found at index location "
      << location << endl;

else
  cout<< "The item was not found in th list\n";

return 0;
}

//this function returns thelocation of the key in the list
// a -1 is returned if the value is not found

int linearSearch(int list[], int size, int key)
{
int i;

for (i = 0; i< size; i++)
  {
   if (list[i] == key)
     return i;
  }

return -1;
}
