#include<iostream>
 
using namespace std;
 
int main(){
    // for (int i = 0; i < 30; i++)
    // {
    //     cout<<i<<endl;
    //     if (i==2)
    //     {
    //         cout<<"You have reached 2"<<endl;
    //         break;
    //     } 
    // }

    for (int i = 0; i < 30; i++)
    {
        if (i==2)
        {
            cout<<"Skip 2"<<endl;
            continue;
        } 
        cout<<i<<endl;
    }
    
    return 0;
}