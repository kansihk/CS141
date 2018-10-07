//program to find reverse of any number using recursion
#include <iostream>
using namespace std;
//define function

int rev(int n, int sum) {
//condition for this
if (n>0){
sum=(n%10)+sum*10;
n=n/10;
rev(n, sum);
}
else return sum;
}

int main(){
int n;
cout<< " enter the number ";
cin>>n;
cout<< " reverse is : " <<rev(n,0)<<endl;
return 0;
}

 
