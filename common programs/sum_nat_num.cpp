
//Program to find sum of ' n ' natural numbers

#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=0;i<=n;i++){
        sum+=i;            //sum = sum + i
    }
    cout<<"Sum of "<<n<<" natural numbers is "<<sum<<endl;
    return 0;
}