//program with a function that takes two int parameters, finds the maximum, then returns the maximum
//include library
#include<iostream>
using namespace std;
//function

					//maximum of two numbers

float max(float x, float y){
					//find maximum
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
	cout <<"kuch bhi do number dal de :"<<endl;
	cin>>a>>b;
	cout<<"maximum provide karne ka: "<<max(a,b)<<endl;
	
return 0;
}
