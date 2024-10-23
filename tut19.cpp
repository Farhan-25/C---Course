#include<iostream>
 
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a + b;
}
int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a + b + c;
}
int main(){
    cout<<"The sum of a and b is "<<sum(4,6)<<endl;
    cout<<"The sum of a , b and c is "<<sum(4,6,10)<<endl;
    return 0;
}