#include<iostream>
 
using namespace std;
 
int main(){
    int marks[4] = {45,34,76,82};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2] = 455;
    // //You can change the value of array
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    return 0;
}