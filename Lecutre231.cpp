// 1. Program to check if a number is even or odd.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    if (a%2==0)
    {
        cout<<a<<" is a even number"<<endl;
    }else{
        cout<<a<<" is a odd number"<<endl;
    }
    return 0;
}