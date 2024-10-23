#include<iostream>
 
using namespace std;
 
int sum(int a , int b);
void g(void);
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num2;
    cout<<"Enter second number"<<endl;
    cin>>num1;
    cout<<"The sum is " <<sum(num1 , num2)<<endl;
    g();
    return 0;
}
int sum(int a , int b){
    int c = a + b;
    return c;
}
void g(){
    cout<<"Hello Good Morning";
}