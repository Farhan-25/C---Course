#include<iostream>
 
using namespace std;
 
inline int product(int a , int b){
    // Not recommended to use below lines with inline functions
    // static int c = 0; //This executes only once
    // c = c + 1;   //Next time this function is run , the value of c will be retained

    return a * b;
}

float moneyRecieved(float currentmoney , float factor=1.04){
    return currentmoney * factor;
}

// int strlen(const char *p){

// }
int main(){
    int a , b;
    // cout<<"Enter a and b : "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<<" Rs in your back account, you will recive "<<moneyRecieved(money, 1.04)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your back account, you will recive "<<moneyRecieved(money, 1.10)<<" Rs after 1 year"<<endl;
    return 0;
}
