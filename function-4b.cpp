//same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
//include library
#include<iostream>
using namespace std;
//function

//function must give minimum number
void min(float x, float y, float &z){
	
	if (x>y){ z=y; }
	else { z=x; }
	
}

int main(){
	float a,b,c;
					//ask two numbers
	cout << "write two ramdom numbers: "<<endl;
	cin>>a>>b;

					//call the function 
	min(a,b,c);
	cout<< "minimum between two numbers is: "<<c<<endl;
return 0; 

}
