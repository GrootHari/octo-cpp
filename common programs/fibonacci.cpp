
// This is a program to find first ' N ' terms of a fibonacci series
//

#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i;
    cout<<"Enter the limit: ";
    cin>>n;
    if(n==1){
        cout<<a;
    }
    else{
        cout<<a<<"\t"<<b;
        for(i=3;i<=n;i++){
            c=a+b;
            cout<<"\t"<<c;
            a=b;
            b=c;
        }
    }
    cout<<endl;
}