#include<iostream>
using namespace std;

int main()
{
    int num1, num2 , sum;
    cout<<"Enter the value of num1 \n";                          // << THis is called Insertion operator
    cin>>num1;                                                   // << THis is called Extraction operator
    
    cout<<"Enter the value of num2 \n";                          
    cin>>num2;    

    sum = num1 + num2;
    cout<<"The sum of num1 and num2 is " <<sum;                                             
    return 0;

}
