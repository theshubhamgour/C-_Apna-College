// Ques2. Program to display multiplication table upto 10.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    
}