// Program to find the maximum among three numbers.
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three values: "<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
           cout<<a<<" -a is greater"<<endl;
        }
        else{
            cout<<c<<" -c is greater"<<endl;
        }
    }
    else if (b>c)
    {
       cout<<b<<" -b is greater"<<endl;
    }
    else{
        cout<<c<<" -c is greater"<<endl;
    }
    return 0;   

}