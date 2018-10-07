//program to generate nth Fibonacci term using recursion
#include <iostream>
using namespace std;
//define function
int fib(int x, int y, int z, int a ){
if (a<=z){
int b=a+b;
cout<<x<<endl;
x=y;
y=b;
a++;
fib(x,y,z,a);
}
return 0;
}

int main(){
int z;
cout<<" enter the number ";
cin>>z;
cout<<fib(0,1,z,1)<<endl;
return 0;
}


