//Write a program to find sum of all elements of an array. (Use functions)
#include<iostream>
using namespace std;
//function for sum
int sum(int arr[], int n){
int i,sum=0;
for(i=0;i<n;i++){
sum=sum+arr[i]
}
	cout<<"sum of all element in array"<<sum<<endl;
}

int main(){
// ask to enter the numbers to be sum
int arr[]={9,8,5,7,6,2,1,3,4,5,1};
//calling function
cout<< " sum of the numbers are "<<sum(arr,11)<<endl;
return 0;
}
