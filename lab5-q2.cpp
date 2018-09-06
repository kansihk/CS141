// program to find maximum between three numbers
#include<iostream>
using namespace std;
//function declaration
int main()
{
//input data show output
int x,y,z;
cout<<"type three numbers";
cin>>x>>y>>z;
//compare data
if (x >= y){
	if (x >= z){
	cout << x << "is maximum\n";
	}
}
else if (y >= z){

	if (y >= x){
	cout << y <<"is maximum\n";
	}
}
else
     cout<< z << "is maximum\n";


return 0;
}
