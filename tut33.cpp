#include<iostream>
using namespace std;

class bankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankDeposit() {}

    bankDeposit(int p, int y, float r);
    bankDeposit(int p, int y, int r);
    
    void show();
};

bankDeposit::bankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

bankDeposit::bankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

void bankDeposit::show() {
    cout << "Principal amount: " << principal
         << "\nReturn value after " << years
         << " years is: " << returnValue << endl;
}

int main() {
    bankDeposit bd1, bd2;

    bd1 = bankDeposit(1000, 5, 0.04f);
    bd1.show();

    bd2 = bankDeposit(1000, 5, 4);
    bd2.show();

    return 0;
}
