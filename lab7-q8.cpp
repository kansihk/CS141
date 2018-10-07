// program to find sum of digits of a given number using recursion
#include <iostream>
using namespace std;

//define function
int sod(int n, int s){
	if (n>0){
      	
		s= s+(n%10);
		n=n/10;
		sod(n,s);
		}
	else
	return s;
}

int main (){
int n;
cout<< " enter any number ";
cin>>n;
cout<< " sum of the given numer is " <<sod(n,0)<<endl;
return 0;
}
