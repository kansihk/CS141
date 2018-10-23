//Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int m), similarly for smallest)
#include<iostream>
using namespace std;
//function for arranging
void arra(int arr[],int n){
int i,x,y;
for(i=0;i<n;i++){
	a=arr[i];
	for(x=i+1;x<n;x++){
		if(arr[x]<arr[i]){
			a=arr[x];
			arr[x]=arr[i];
			arr[i]=y;
		}
	}
}
}
//function for mth max
int m_max(int arr[], int n, int m){
int mmax;
	mmax=arr[n-m];
return mmax;
}	
//function for mth min
int m_min(int arr[],int n, int m){
int mmin;
	mmin=arr[m-1];
return mmin;
}

int main(){
int arr[]={9,8,5,7,6,2,1,3,4,5,1};
int m1,m2,i;
cout<<"Value of m for max and value of m for min"<<endl;
cin>>m1>>m2;
//calling function
arra(arr,11);
for(i=0;i<11;i++){
cout<< arr[i]<<endl;
}
cout<<"M-th max number is :"<<m_max(arr,11,m1)<<endl;
cout<<"M-th min number is :"<<m_min(arr,11,m2)<<endl;
return 0;
}
