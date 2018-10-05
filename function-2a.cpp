//programme with a function that takes two int parameters, adds them together, then returns the sum
//include library
#include<iostream>
using namespace std;


//define function
int addition(int a, int b){
	int r;
	r = a+b;
	return r;
}

		
int main(){
	int x, y, z;
   	//asking input		
	cout <<"write two numbers: \n";
	cin>>x;
	cin>>y;	
	z = additation(x, y);
		
	cout<<"the sum of given numbers is :"<<z<<endl;
	//print the result

return 0;

}



    
    
