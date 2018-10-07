//program to find sum of all natural numbers between 1 to n using recursion
#include <iostream>
using namespace std;

//define function which shows that func(n)= n + f(n-1)

int func(int n)
{
if (n==1){ 
           return 1;
}
else { 
         return (n+func(n-1));     //func(n)= n+func(n-1)
}

  }


int main(){
int n;
cout << " enter the value of n ";
cin >> n;
cout<< " sum of all natural number between 1 to n " <<func(n) ;
return 0;
}
