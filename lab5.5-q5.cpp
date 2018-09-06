//library function
#include<iostream>
using namespace std;
int main()
//initialize
{
int x,y,z;
cout<<"enter stars in one side of the square";
cin>>z;
//looping
      for(x=1;x<=z;x++){
           for(y=1;y<=z;y++){
               if(y==1||y==z||x==1||x==z)
                   cout<<"*";
                  else
                       cout<<" ";
              }
               cout<<endl;
              }
return 0;
}
