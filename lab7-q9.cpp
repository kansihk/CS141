//program to find factorial of any number using recursion
#include <iostream>
using namespace std;
//define function
int fac (int n, int mul){
	if(n>0){
		mul=mul*n;
		n--;
	fac(n,mul);
	}
	else
	return mul;
}

int main(){
int n;
cout<< " enter any number";
cin>>n;
cout<< "  factorial of given number is "<<fac(n,1)<<endl;
return 0;
}

