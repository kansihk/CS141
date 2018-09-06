//library function
#include<iostream>
using namespace std;
int main()
//initialize
{
int x,y,z;
cout<<"enter star in one side of the square";
cin>>z;
//looping
      for(x=1;x<=z;x++){
           for(y=1;y<=x;y++){
               if(x==1||x==z||y==1||y==z||x==y||x==z-y+1)
                   cout<<"*";
                  else
                       cout<<" ";
              }
               cout<<endl;
              }
return 0;
}
