
//this is a program using linear search to find an array element

#include<iostream>
using namespace std;
int main(){
    int arr[20],i,n,k,flag=0;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>k;
    for(i=0;i<n;i++){
        if(arr[i]==k){
            flag=1;
            cout<<"Element found at "<<i+1<<endl;
        }
    }
    if(flag==0){
        cout<<".... Element not found in array ...."<<endl;
    }
}
