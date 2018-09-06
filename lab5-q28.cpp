//program to find sum of all even numbers between 1 to n. 
#include<iostream>
using namespace std;
int main(){
int i,p,n;
cout<<"enter number";
cin>> n;

for(i=1;i<=n;i++)
{
	if(i%2==0){
    p += i; //p=p+i

}
}
   cout << " sum is even number" << p << endl;
  
    return 0;
}
