//program to find sum of all natural numbers between 1 to n. 
#include<iostream>
using namespace std;
int main(){
int i=1,p,n;
cout<<"enter number";
cin>> n;

while(i<=n)
{
	
    p += i;
i++;
}
   cout << " sum is even number" << p << endl;
  
    return 0;
}
