//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;
//function for max
int max(int arr[], int n){
int i,a=arr[0];
for(i=0;i<n;i++){
	if(a<arr[i])
		a=arr[i];
	}
return a;
}
//function for min
int min(int arr[], int n){
int i,a=arr[0];
for(i=0;i<n;i++){
	if(a>arr[i])
		a=arr[i];
	}
return a;
}
//function for mean
float mean(int arr[], int n){
int i;
float mean,sum=0;
for(i=0;i<n;i++){
	sum=sum+arr[i];
}
mean=sum/n;
return mean;
}
//function for median
float med(int arr[],int n){
int i,j,a;
float medi;
for(i=0;i<n;i++){
	a=arr[i];
	for(j=i+1;j<n;j++){
		if(arr[j]<arr[i]){
			a=arr[j];
			arr[j]=arr[i];
			arr[i]=a;
		}
	}
}
	if(n%2==0)
		medi=(arr[n/2]+arr[n/2+1])/2;
	else
		medi=arr[(n+1)/2];
return medi;
}
//function for high frequency mod
}

int main(){
int arr[]={9,8,5,7,6,2,1,3,4,5,1};
//calling function
cout<<"Max number is :"<<max(arr,11)<<endl;
cout<<"Min number is :"<<min(arr,11)<<endl;
cout<<"Mean is :"<<mean(arr,11)<<endl;
cout<<"Median is :"<<med(arr,11)<<endl;
return 0;
}
