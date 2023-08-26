
// this is a program to find factorial of a number

#include<iostream>
using namespace std;
int factorial(int x){
    int i,s=1;
    for(i=1;i<=x;i++){
        s=s*i;
    }
    return s;
}
int main(){
    int n,f;
    cout<<"Enter a number: ";
    cin>>n;
    f=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<f<<endl;
    return 0;
}