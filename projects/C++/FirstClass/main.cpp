#include <iostream>
using namespace std;

const double pi{3.1415926535897932385};

class Cylinder{
    public:
        double volume(){
            return pi*base_radius*base_radius*height;
        }
    private:
        double base_radius{2};
        double height{3};
    };

int main(int argc, char** argv){
    Cylinder cylinder1;
    cout<<"volume: "<<cylinder1.volume()<<endl;
    cout<<"height: "<<cylinder1.height<<endl;
    cout<<"base_radius: "<<cylinder1.base_radius<<endl;
}