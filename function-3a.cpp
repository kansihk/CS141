//program with a function that takes two int parameters, finds the maximum, then returns the maximum
//include library
#include<iostream>
using namespace std;
//define function

					//write the maximum of two numbers

float max(float x, float y){
					//find maximum in between them
	float z;
	if (x>y){
		z=x;	
	}
	else {
		z=y;
	}
					//return the maximum
return z;
}



int main(){

	float a,b;
	cout <<"enter two numbers :"<<endl;
	cin>>a>>b;
	cout<<"maximum number between these two is : "<<max(a,b)<<endl;
	
return 0;
}
