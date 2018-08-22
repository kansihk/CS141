//program converting celsius into fahrenheit

//icluding library
#include <iostream>

using namespace std;

//including the function 

int main() {

//declaring the variables

float b;

//asking for a value
cout << "Please enter the temperature in celsius\n";

//reading the variable
cin >>b;
cout << "the value you entered is\n " << b;

//performing the calculation
cout << " and its value in fahrenheit is " << (b*1.0)+32 << "F" << "\n";

//end
return 0;
} 
