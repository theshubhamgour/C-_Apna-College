// Ques1. Write a program to print all odd numbers till n.

#include <iostream>
using namespace std;
int main(){
    int n=10;
    for (int i = 1; i < n; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}