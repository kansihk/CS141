#include <iostream>
using namespace std;
//define function

int rev(int n, int sum){
if (n>0){
sum=(n%10)+sum*10;
n=n/10;
rev(n,sum);
}
else return sum;
}

int main(){
int n, reve;
cout<< " enter a number ";
cin>>n;
reve=rev (n,0);
if(n==reve)
	cout<< "palindrome number is" << endl;
else
	cout<< " number is not palindrome" <<endl;
return 0;
}
