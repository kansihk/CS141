//program to enter marks of five subjects and calculate total, average and percentage

//include library
#include <iostream>
#include <cmath>
using namespace std;

//including function
int main()
{

//declating the variables
float a,b,c,d,e;

//asking for input and reading the input for variable 
cout << " calculate the total,average and percentage of five subjects\n ";
cout << " enter marks ";
cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;

//performing the calculation
cout << " your total marks is\n " << a+b+c+d+e << endl;
cout << " your average marks is\n " << (a+b+c+d+e)/5 << endl;
cout << " your percentage is\n " << (a+b+c+d+e)/500*100 << endl;

return 0;
}

