// Ques2. Write a program to find whether an alphabet is a vowel or a consonant.

#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter an alphabet: ";
    cin>>alpha;
    switch (alpha)
    {
    case 'a':
        cout<<"It is an vowel"<<endl;
        break;
    case 'e':
        cout<<"It is an vowel"<<endl;
        break;
    case 'i':
        cout<<"It is an vowel"<<endl;
        break;
    case 'o':
        cout<<"It is an vowel"<<endl;
        break;
    case 'u':
        cout<<"It is an vowel"<<endl;
        break;
    case 'A':
        cout<<"It is an vowel"<<endl;
        break;
    case 'E':
        cout<<"It is an vowel"<<endl;
        break;
    case 'I':
        cout<<"It is an vowel"<<endl;
        break;
    case 'O':
        cout<<"It is an vowel"<<endl;
        break;
    case 'U':
        cout<<"It is an vowel"<<endl;
        break;
    
    default:
        cout<<"It is a consonent"<<endl;
        break;
    }
}