
//Program to find length of a string

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char str[20];
    int i;
    cout<<"Enter the String: ";
    cin.get(str,19);
    for(i=0;str[i]!='\0';i++);
    cout<<"Length of string is "<<i;
    cout<<"\n";
    return 0;
}