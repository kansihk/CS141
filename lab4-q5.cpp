//programed to enter two angles of a triangle and find the third angle

//icluding library
#include <iostream>

using namespace std;

//including the function 

int main(){

//declaring the variables
int angle_a;
int angle_b;

//asking for an input value
cout << " Enter your first angle\n ";
cin >> angle_a ;
cout << " Enter your second angle\n ";
cin >> angle_b ;

//performing the calculation
cout << " Hence your third angle is" << 180-(angle_a+angle_b) << ".\n";

//end
return 0;
}


