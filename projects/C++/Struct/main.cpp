#include <iostream>
using namespace std;

class Dog{
  string m_name; //private by default
};

struct Cat
{
    /* data */
    string m_name; //public by default
};

struct Point{
    double x;
    double y;
};

void print_point(const Point &point) {
    cout<<point.x<<" "<<point.y<<endl;
}

int main(){
    Dog dog1;
    Cat cat1;
    //dog1.m_name = "Dog";
    cat1.m_name = "twinkles";

    Point point1;
    point1.x = 100;
    point1.y = 212.3;
    print_point(point1);

    point1.x = 121.32;
    point1.y = 423.67;
    print_point(point1);
}
