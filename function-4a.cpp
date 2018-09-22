//function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
//include library
#include<iostream>
using namespace std;
//function

//the function that give minimum of two numbers
float min(float x, float y){
	float z;	
	if (x>y){ z=y; }
	else { z=x; }
return z;
	
}

int main(){
	float a,b;
					//ask two numbers
	cout << "write two ramdom numbers: "<<endl;
	cin>>a>>b;

					//call the function 
	cout<< "minimum between two numbers is: "<<min(a,b)<<endl;
return 0; 

}
