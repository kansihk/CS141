//programed to converting fahrenheit to celsius

//icluding library
#include <iostream>

using namespace std;

//including the function 

int main(){

//declaring the variables

float c;

//asking for a value
cout << "Please enter the temperature into fahrenheit\n";

//reading the variable
cin >> c;
cout << "the value you entered is " << c;

//performing the calculation
cout << " and its value in celsius is" << (c-32)*(0.56) << "C" << "\n";

//end
return 0;
}
