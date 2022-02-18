/*

4.1 Awesome Pattern Questions -1 | Guaranteed Placement Course
    Video Link: "   https://youtu.be/LfgAOZ1kKMw    "
    Channel name: Apna College
    Notes by @theshubhamgour
*/

                    //  Pattern 1. 
                    //                 * * * * * 
                    //                 * * * * *
                    //                 * * * * *
                    //                 * * * * *

#include <iostream>
using namespace std;
int main(){
    int row,col;

    cin>>row>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <=col; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

}