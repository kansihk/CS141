//function that adds the numbers should be void, and takes a third, pass by reference parameter, then puts the sum in that.
//include library
#include<iostream>
using namespace std;
//function


//the function that adds the numbers should be void
void add(int x, int y, int &z){
	
	z = x+y;
}


int main(){
	int a,b,sum;			
					//put the value
	cout <<"write the values :\n";
					//take the values
	cin>>a;
	cin>>b;				
	add(a, b, sum);
	cout << "The sum of given numbers is: "<<sum<<endl;
return 0;
}
