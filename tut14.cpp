#include<iostream>
 
using namespace std;
 
 typedef struct employee
    {
        int eID;
        char a;
        float salary;
    }ep;

int main(){
    
    struct employee farhan;
    farhan.eID = 4;
    farhan.a = 'c';
    farhan.salary = 12000000;

    ep Harry;
    Harry.eID = 78;
    Harry.a = 'k';
    Harry.salary = 50000000;

    cout<<"The value is "<<farhan.eID<<endl;
    cout<<"The value is "<<farhan.a<<endl;
    cout<<"The value is "<<farhan.salary<<endl;

    cout<<"The value is "<<Harry.eID<<endl;
    cout<<"The value is "<<Harry.a<<endl;
    cout<<"The value is "<<Harry.salary<<endl;

    enum Meal{breakfast , lunch , dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    
    return 0;
}