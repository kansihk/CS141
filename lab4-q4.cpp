//programed to convert days into years, weeks and days.

//icluding library
#include <iostream>

using namespace std;

//including the function 

int main(){

//declaring the variables
int k;

//asking for a value
cout << "converstion of days into years,weeks and months.\n";
cout << "please enter numbers of days: ";

//reading the input for variable
cin >> k;

//convertion calculation
cout << "value enter: " << k << "days" <<endl;
cout << " week: " << k/7 << " weeks " <<endl;
cout << " months: " << k/30 << " months " <<endl;
cout << " years: " << k/365 << " years " <<endl;

return 0;
}

