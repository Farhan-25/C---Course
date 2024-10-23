#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me you age: "<<endl;
    cin>>age;

    //Selection control structure :If-else else-if ladder
    // if (age<18)
    // {
    //     cout<<"You are not allowed to drive"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are eligible for driving license"<<endl;
    // }
    // else
    // {
    //     cout<<"You are allowed to drive"<<endl;
    // }
    
    //Selection control structure :Switch Case statements
    switch (age)
    {
    case 18:
        cout<<"You are a teen"<<endl;
        break;
    case 22:
        cout<<"You are a man"<<endl;
        break;
    case 2:
        cout<<"You are a kid"<<endl;
        break;

    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with special cases"<<endl;
    
    return 0;
}