//function-Tax rate calculatation
//include library
#include<iostream>
using namespace std;


int returnvalue(int &x, int &y,int &z){
 	 	
			 cout<< "enter the units = "<<endl;
			 cin>>x;
	 		 cout<< "enter the unitCst = "<<endl;
	 		 cin>>y;
	 		 cout<< "enter the taxRate = "<<endl;
			 cin>>z;
 	 }
// function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 	 
 	 void sat(int& x, int& y,int& z){
 	 	
	 	int sat = x*y*z;
	 	cout<< "salesTaxe = "<< sat <<endl;
 	 }
 	 void tot(int& x, int& y,int& z){
 	 	
	 	int tot = (x*y*z) + (x*y);
	 	cout<< "totDue = "<< tot <<endl;
 	 }
// function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. 	 	
	 int read(int& x, int& y,int& z){
	 	  
cout<< "The unit cost over the object is " <<y<< ". "<<endl<<"The number of units are "<<x<<". "<<endl<<"The tax rate is "<<z<<". "<<endl<<"the sales tax is "<<(x*y*z)<<". "<<endl<<"The total is "<<(x*y*z)+ (x*y)<<endl; 
	 }
//function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
					
int main(){
	 	
					
	 	  	int x,y,z;
			returnvalue(x,y,z);
	 	  	sat(x,y,z);
	 	  	tot(x,y,z);
	 	  	read(x,y,z);

	 	  	return 0;

}
