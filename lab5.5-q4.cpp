//library function
#include<iostream>
using namespace std;
int main()
//initialize
{
int x,y,z;
cout<<"star side of triangle";
cin>>z;
//looping
      for(x=1;x<=z;x++){
           for(y=1;y<=x;y++){
               if(x==y||y==1||x==z)
                   cout<<"*";
                  else
                       cout<<" ";
              }
               cout<<endl;
              }
return 0;
}
