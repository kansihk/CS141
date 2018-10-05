//same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter
//include library
#include<iostream>
using namespace std;
//define function

//the function give maximum of two numbers,that should be void
void max (float x, float y, float &z){
	if (x>y){ z=x; }
	else { z=y; }
	
}

int main(){
	float a,b,c;
        //ask the number
	cout << "enter the two number : "<<endl;
	cin>>a>>b;

//call the function ...because the function in void and take by refrence so when i call the function it call veriable c than in a,b,c  took the value of z and still be veriable.....now if i <<z then..it print z
	max(a, b, c);
	cout<< "maximum between two numbers is: "<<c<<endl;
return 0; 

}
