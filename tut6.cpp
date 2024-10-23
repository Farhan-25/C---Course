using namespace std;

// There are 2 types of header files:
// 1.System header files: It comes with the compiler
#include<iostream>
// 2.User defined header files: It is written by the programmer
//#include "This.h" ---> This will produce a error as it must be present in the current directory
int main(){
    int a = 4  , b = 5;
    cout<<"Operators in C++"<<endl;   //endl just jumps to new line
    //Aritmetic operators
    cout<<"Following are types of Aritmetic operators in C++"<<endl;
    cout<<"The value of a + b is " <<a+b<<endl;
    cout<<"The value of a - b is " <<a-b<<endl;
    cout<<"The value of a * b is " <<a*b<<endl;
    cout<<"The value of a / b is " <<a/b<<endl;
    cout<<"The value of a % b is " <<a%b<<endl;
    cout<<"The value of a++ is " <<a++<<endl;
    cout<<"The value of a-- is " <<a--<<endl;
    cout<<"The value of --a is " <<--a<<endl;
    cout<<"The value of ++a is " <<++a<<endl;
    cout<<endl;
    //Assignment operators
    //int a = 4 , b = 6;
    //used to assign values


    //Comparison operators
    cout<<"Following are types of Comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;

    //Logical operators
    cout<<"Following are types of Logical operators in C++"<<endl;
    cout<<"The value of (a==b) && (a<b)) logical operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of (a==b) || (a<b)) logical operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of (!(a==b)) logical operator is "<<(!(a==b))<<endl;


    return 0;

}