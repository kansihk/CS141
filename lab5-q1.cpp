//program to find maximum between two numbers
#include<iostream>
using namespace std;
//function declaration
int main(){
//input data show output
int x,y;
cout<<"type two numbers";
cin>>x>>y;
//compare data
if (x>y){
cout << x << " is maximum";
}
else if (x<y){
cout << y <<" is maximum";
}
else if (x=y)
{
cout<<"both are same";
}
return 0;
}
