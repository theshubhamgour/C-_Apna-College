// Ques3. Program to add only positive numbers.

// This one is different than others.

#include <iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout<<"Enter a number: ";
    cin>>n;
    while (n>=0)
    {
        sum += n;
        cout<<"Enter number: ";
        cin>>n;
    }
    cout<<"The total is :"<<sum;
    return 0;
}