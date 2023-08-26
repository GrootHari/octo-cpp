
// Find sum of digits of a number

#include<iostream>
using namespace std;
int main(){
    int n,rem,s=0;
    cout<<"Enter the digit: ";
    cin>>n;
    while(n>0){
        rem = n % 10;
        s = s + rem;
        n = n / 10;
    }
    cout<<"Sum of digits is "<<s;
    cout<<endl;
    return 0;
}