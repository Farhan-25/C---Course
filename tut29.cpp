#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as that of class.It is automatically invoked.
    // It is used to initialize the objects of the class.
    complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // ----> This is a default constructor as it accepts no parameter
{
    a = 10;
    b = 2;
}
int main()
{
    complex c;
    c.printNumber();
    return 0;
}

//Properties of constructors

//1.It should be declared in public section of class.
//2.They are automatically invoked whenever object is created.
//3.They cannot return values and don't have return types.
//4.It can have default arguments.
//5.We cannot refer to the address.