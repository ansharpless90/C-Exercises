#include <iostream>
#include <cmath>
using namespace std;

int main()
{


int height;
double time;

height = 800;
time = sqrt(2 * height / 32.2);
cout << " It will take " << time << " seconds to fall "
     <<height << " feet.\n";

return 0;
}
