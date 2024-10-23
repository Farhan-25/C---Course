#include <iostream>

using namespace std;

class employee
{
private:
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int employee ::count; // Defaullt value 0
int main()
{
    employee farhan, rehan, tufail;

    farhan.setData();
    farhan.getData();
    employee::getCount();

    rehan.setData();
    rehan.getData();
    employee::getCount();

    tufail.setData();
    tufail.getData();
    employee::getCount();

    return 0;
}