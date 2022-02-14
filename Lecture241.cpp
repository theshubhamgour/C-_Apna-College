// Ques1. Program to find sum of natural numbers till n.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;

    for (int i = 0; i <= n; i++)
    {
        sum = sum +i;
    }

    cout<<sum<<endl;
    
}