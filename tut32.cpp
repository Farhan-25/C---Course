#include <iostream>

using namespace std;

class simple
{
private:
    int data1;
    int data2;

public:
    simple(int a, int b=9)
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};

void simple :: printData(){
    cout<<"The value of data1 and data2 is "<<data1<<" and "<<data2<<" respctively."<<endl;
}

int main()
{
    simple s(1);
    s.printData();
    return 0;
}