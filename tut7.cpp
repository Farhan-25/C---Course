#include<iostream>

using namespace std;

int c  = 45;

int main(){

//****************Built in Data Type*********************
// int a , b , c;
// cout<<"Enter the value of a:"<<endl;
// cin>>a;
// cout<<"Enter the value of b:"<<endl;
// cin>>b;
// c = a + b;
// cout<<"The sum of a and b is: "<<c<<endl;
// cout<<"The global value of c is : "<<::c;

//****************float , double and long double Literals*********************
// float d = 3.45f;
// long double e = 3.45l;
// cout<<"The size of 3.45 is "<<sizeof(3.45)<<endl;
// cout<<"The size of 3.45f is "<<sizeof(3.45f)<<endl;
// cout<<"The size of 3.45F is "<<sizeof(3.45F)<<endl;
// cout<<"The size of 3.45l is "<<sizeof(3.45l)<<endl;
// cout<<"The size of 3.45L is "<<sizeof(3.45L)<<endl;

// cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e;

//****************Reference Variables*********************
// float x = 455;
// float &y = x;

// cout<<x<<endl;
// cout<<y<<endl;

//****************Type Casting*********************
int a = 45;
float b = 45.67;

cout<<"The value of a is: "<<float(a)<<endl;
cout<<"The value of a is: "<<(float)a<<endl;
cout<<"The value of b is: "<<int(b)<<endl;
cout<<"The value of b is: "<<(int)b<<endl;
cout<<endl;

int c = int(b);

cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + (int)b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
}