//C++ program to check whether a number is divisible by 5 and 11 or not.
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
if (x % 55 == 0){
	cout << x << "is divisible by both 5 and 11\n";
	}

if (x % 5 == 0){
	cout << x << "is divisible by 5\n";
	}

else if (x % 11 == 0){

	cout << x <<"is divisible by 11 \n";
	}

else
     cout<< x << "number is not divisble by 5 and 11\n";


return 0;
}

