#include <iostream>

using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int a;
//     cout<<"Enter number whose factorial you want"<<endl;
//     cin>>a;
//     cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
//     return 0;
// }

int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int a;
    cout<<"Enter the terms you want"<<endl;
    cin>>a;
    cout<<"The "<<a<<"th term in fibonacci series is "<<fibonacci(a)<<endl;
    return 0;
}