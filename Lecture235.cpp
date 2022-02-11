//Program to check if an alphabet is a vowel or a consonant.
#include <iostream>
using namespace std;
int main(){
    char c;
    int lc,uc;
    cout<<"Enter an alphabnet: ";
    cin>>c;
    lc= (c=='a' ||c== 'e'|| c=='i'|| c=='o'|| c=='u');
    uc= (c=='A' || c=='E'|| c=='I'|| c=='O'|| c=='U');
    if (lc || uc)
    {
        cout<<"It is a vowel"<<endl;

    }else{
        cout<<"It is a consonent"<<endl;
    }
    
}