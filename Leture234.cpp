// Program to check if a triangle is scalene, isosceles or equilateral.
#include <iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter the three sides of the triangle: ";
    cin>>s1>>s2>>s3;
    if (s1==s2 && s2==s3)
    {
        cout<<"It is a Equilatral Triangle"<<endl;
    }else if (s1==s2 || s1==s3 || s2==s3)
    {
        cout<<"It is a isoseles triangle"<<endl;
    }else if (s1 != s2 != s3)
    {
        cout<<"It is a scalene triangle"<<endl;
    }
    
    return 0;
    
}