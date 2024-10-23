#include<iostream>
 
using namespace std;
 
int main(){
    //What is a pointer? ---> Data type which is used to hold the address of other data types

    int a = 3;
    int* b = &a;
    // &---->Address of operator
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<b<<endl;
    
    // *---->Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    return 0;
}