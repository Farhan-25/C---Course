#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
    friend void distancebetweenPoint(const point &p1 , const point &p2);
};
void distancebetweenPoint(const point &p1 , const point &p2){
    double distance;
    distance = sqrt(pow(p1.x - p2.x , 2) + pow(p1.y - p2.y , 2));
    cout<<"The distance between the points is "<<distance<<endl;
}


int main()
{
    point a1(1,1);
    a1.displayPoint();

    point a2(1,9);
    a2.displayPoint();

    distancebetweenPoint(a1 , a2);

    return 0;
}