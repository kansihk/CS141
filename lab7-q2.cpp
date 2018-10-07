//program to print all natural numbers between 1 to n using recursion
#include <iostream>
using namespace std;

//define function
int f(int n){
	if (n==1) return 1;
	else {
		cout << n <<endl;
		return f(n-1);
	}
}

int main(){
int n;
cout << "enter the value of n: ";
cin>>n;
cout<< " all natural number between 1 to n are " <<endl;
cout << f(n) <<endl;
return 0;
}

