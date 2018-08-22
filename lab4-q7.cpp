//programed to  calculate area of an equilateral triangle

//include library
#include <iostream>
#include <cmath>

using namespace std;

//including function
int main()
{

//declaring the variables
float i;

//asking for input and reading the input of variable
cout << " finding area of equilateral triangle from two known side length\n ";
cout << " length of one side\n ";
cin >> i;

//performing the calculation
cout << " hence area of equilateral traingle is " << sqrt(3)*i*i/4 << endl;

return 0;
} 

