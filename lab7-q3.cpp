//program to print all even or odd numbers in given range using recursion
#include <iostream>
using namespace std;

//define function
int f(int n){
	if (n==1) return 1;
	else if (n==2) return 2;
	else {
		cout << n <<endl;
		return f(n-2);
	}
}

int main(){
int n;
cout << "enter the value of n: ";
cin>>n;
cout<< " all even or odd numbers in given range " <<endl;
cout << f(n) <<endl;
return 0;
}

