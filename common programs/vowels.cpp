
// This is a program to find number of vowels in a string

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    char a[20], *s;
    int i,count=0;
    cout<<"Enter a string:";
    cin>>a;
    s=a;
    int t=strlen(a);
    for(i=0;i<=t;i++)
    {
        switch(tolower(*(s+i))){
            case 'a':
            count++;
            break;

            case 'e':
            count++;
            break;

            case 'i':
            count++;
            break;

            case 'o':
            count++;
            break;

            case 'u':
            count++;
            break;
        }
    }
    cout<<"The number of vowels is "<<count<<endl;
}