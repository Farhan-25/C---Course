#include <iostream>

using namespace std;

// Base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpId)
    {
        inpId = id;
        salary = 34.0;
    }
    employee() {}
};

// Derived class syntax
//  class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
//  {
//      class members/methods/etc...
//  }
// Note:
// 1.Default visibility mode is private
// 2.Private visibility mode private memebers of main class become public members of derieved class
// 2.Public visibility mode public memebers of main class become public members of derieved class
// 4.Private members are never inherited
// Creating a programmer class derived from employee base class
class programmer : public employee
{
public:
    int languageCode;
    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    employee farhan(1), rehan(2);
    cout << farhan.salary << endl;
    cout << rehan.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}