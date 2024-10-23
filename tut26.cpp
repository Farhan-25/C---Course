#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that sumComplex is given permission to read and use private information of the class 
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
    friend complex sumComplex(complex o1, complex o2)
    {
        complex o3;
        o3.setNumber(o1.a + o2.a, o1.b + o2.b);
        return o3;
    }
};
int main()
{
    complex c1, c2 , sum;
    c1.setNumber(5, 6);
    c2.setNumber(5, 4);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
}

