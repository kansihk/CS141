//library function
#include<iostream>
using namespace std;
int main() {
int i,j,n;
cout<< "star side of mirror right anlge triangle";
cin>>n;
//looping
for (i=1;i<=n;i++){
     for(j=1;j<=n;j++){
         if(j>n-i)
                cout<<"*";
              else 
                 cout<<" ";
                    }
               cout<<endl;
            }
 
return 0;
}
