#include<iostream>

using namespace std;

class base{
    int data1; // private by default and is not inheritable
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base :: setData(void){
    data1 = 10;
    data2 = 20;
}
class derived : public base{        //Class is being derived publically
    int data3;
    public:
        void process();
        void display();
};

int main(){
    
    return 0;
}