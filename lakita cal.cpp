#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
 char op;
 float x,y;	
 float result;
 while(1)
 {
cout<<"\nWhich operation do you want to perform \n 1) + \n 2) - \n 3)* \n 4)/ \n 5)n  \n";
cin>>op;
if(op == 'n' || op =='N')
exit(0);
cout<<"\nEnter the two numbers";
cin>>x>>y;
switch(op){
case '+' :
   cout<<x<<"+"<<y <<"=" <<x+y;
   break;
case '-':
   cout<<x<<"-"<<y <<"=" <<x-y;
   break;
case '*' :
   cout<<x<<"*"<<y <<"=" <<x*y;
   break;
case '/' :
   cout<<x<<"/"<<y <<"=" <<x/y;
    break;  

default: cout<<"Select valid Operation";
exit(0);
break;
}}}

