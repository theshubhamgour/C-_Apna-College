
//Write a program to write a simple calculator.

#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Enter operand: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"The addition is: "<<a+b<<endl;
        break;
    case '-':
        cout<<"The substraction is: "<<a-b<<endl;
        break;
    case '/':
        cout<<"The division is: "<<a/b<<endl;
        break;
    case '*':
        cout<<"The multiplication is: "<<a*b<<endl;
        break;
    
    default:
        cout<<"Invalid Entry";
        break;
    }
}