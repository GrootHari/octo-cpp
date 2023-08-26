
// Program to reverse a number

#include<iostream>
using namespace std;
int main()
{
 int x,rev=0,r;
 bool isNegetive = false;
 cout<<"Enter the number: ";
 cin>>x;
 cout<<"Reversed number : ";
 if(x < 0){
           isNegetive = true;
           x*=-1;
       }
 while(x!=0){  
          rev = rev * 10 + (x % 10);
          x=x/10; 
       }
 if(isNegetive){
           rev*=-1;
       }         
    cout<<rev<<"\t";
    return 0;
 
}