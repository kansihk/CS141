//program to find sum of all odd numbers in given range using recursion
#include <iostream>
using namespace std;


//define function which shows that func(n)= n + f(n-1)

int func(int n)
{
if(n%2==0){
}
else{
	if (n==1) return 1;
	else { 
	         return (n+func(n-2));     //func(n)= n+func(n-2)
	}
}
}


int main(){
int n;
cout << " enter the value of n ";
cin >> n;
cout<< " sum of all odd natural number between 1 to "<< n << " is " << func(n) ;
return 0;
}
