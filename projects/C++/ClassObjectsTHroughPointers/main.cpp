#include <iostream>
#include "cylinder.h"
using namespace std;

int main(int argc, char** argv){
    Cylinder cylinder1(10,10);
    cylinder1.volume();

    Cylinder* p_cylinder1 = &cylinder1;
    cout <<"volume: " << p_cylinder1->volume() << endl;

    Cylinder* p_cylinder2 = new Cylinder(100,2);

    cout <<"volume: " << p_cylinder2->volume() << endl;

    delete p_cylinder2;

}