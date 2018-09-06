//program to check whether a number is negative, positive or zero.
#include<iostream>
using namespace std;
//function declaration
int main()
{
//input data show output
int x;
cout<<"type the numbwer";
cin>>x;
//compare data
if (x > 0){
	cout << x << "is positive\n";
	}

else if (x < 0){

	cout << x <<"is negative\n";
	}

else
     cout<< x << "is zero\n";


return 0;
}

