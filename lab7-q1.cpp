//program to find power of any number using recursion
#include<iostream>
using namespace std;

//define function which shows that func(a,b)= a*func(a,b-1)

int func(int a, int b)
{
if (b==0){ 
           return 1;
}
else { 
         return (a*func(a,b-1));     //func(a,b)= a*func(a,b-1)
}

  }


int main(){
int a,b;
cout << " enter the two variable ";
cin >> a >> b;
cout<< " power of any number will show your answer as" <<func(a,b) ;
return 0;
}
