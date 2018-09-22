// program that includes the above three (2,3,4) functions. main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
//include library
#include<iostream>
using namespace std;
//function

	//function that takes two int parameters, adds them together, then returns the sum.
	float add(float x, float y){
		float r;
		r = x+y;
		return r;
	}
	//the function that give minimum of two numbers
	float min(float x, float y){
		float z;	
		if (x>y){ z=y; }
		else { z=x; }
		return z;
	}
	//the function that give maximum of two numbers

	float max(float x, float y){
		float z;
		if (x>z){z=x;}
		else {z=y;}
		return z;
	}
	
int main(){
	float a,b;
	char c;
					//ask two numbers
	cout << "write two ramdom numbers: "<<endl;
	cin>>a>>b;
					//give options
	cout << "what can i do for you choose any one option: \n"<<"(A) sum of given numbers.\n"<<"(B) maximum of given numbers.\n"<<"(C) minimum of given numbers.\n"<<"write A or B or C in capital\n";
					//get options
	cin>>c;
					
	if (c=='A' ){ cout <<"addition of given numbers: "<< add(a,b)<<endl;}
	else if (c=='B' ) { cout<<"maximum of given numbers: " << max(a,b)<<endl;}
	else { cout<<"minimum of given numbers: "<<min(a,b)<<endl; } 
	
return 0; 

}
